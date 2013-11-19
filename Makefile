# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ctreton <corentintreton@gmail.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/07/29 22:50:43 by ctreton           #+#    #+#              #
#    Updated: 2013/07/30 04:59:52 by ctreton          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CFLAGS=-Wall -Werror -Wextra
LDFLAGS=
NAME=libft.a
SRCS_DIR=srcs
HEADERS_DIR=includes
SRC=$(SRCS_DIR)/ft_putchar.c $(SRCS_DIR)/ft_putstr.c $(SRCS_DIR)/ft_strcmp.c \
	$(SRCS_DIR)/ft_strlen.c $(SRCS_DIR)/ft_swap.c)
NOM=$(basename $(SRC))
OBJ=$(addsuffix .o, $(NOM))

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $^
	@ranlib $(NAME)

$(SRCS_DIR)/%.o: $(SRCS_DIR)/%.c
	@$(CC) -o $@ -c $< -I$(HEADERS_DIR) $(CFLAGS)

fclean: clean mrproper

re: fclean all

clean:
	@rm -rf $(OBJ)

mrproper: clean
	@rm -rf $(NAME)	
