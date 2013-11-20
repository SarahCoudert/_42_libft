# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 02:17:09 by aaubin            #+#    #+#              #
#    Updated: 2013/11/20 08:41:54 by aaubin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CFLAGS=-Wall -Werror -Wextra -g
LDFLAGS=
NAME=libft.a
SRC=ft_memset.c ft_bzero.c ft_memcpy.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c
NOM=$(basename $(SRC))
OBJ=$(addsuffix .o, $(NOM))

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $^
	@ranlib $(NAME)

%.o: %.c
	@$(CC) -o $@ -c $< $(CFLAGS)

fclean: clean mrproper

re: fclean all

clean:
	@rm -rf $(OBJ)

mrproper: clean
	@rm -rf $(NAME)	
