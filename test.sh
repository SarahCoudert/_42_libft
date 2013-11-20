#!/bin/zsh
cd ../libTest
make re
cd ../libft
cp ../libTest/libft_test.a .
gcc Tests/ft_$1.test.c -L. -lft -lft_test -I . -o Tests/test_$1
make re
./Tests/test_$1
