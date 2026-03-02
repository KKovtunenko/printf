# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkovtune <kkovtune@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/09 16:09:48 by kkovtune          #+#    #+#              #
#    Updated: 2026/01/09 19:17:12 by kkovtune         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = ft_putchar.c ft_putdiv.c ft_puthex.c ft_putnbr.c ft_putstr.c ft_putptr.c ft_printf.c
OBJ = $(SRC:.c=.o)
CC = cc
LIBFT_PATH = ./Libft
LIBFT = $(LIBFT_PATH)/libft.a

all: $(NAME) $(LIBFT)

$(LIBFT):
	make -C $(LIBFT_PATH)

$(NAME): $(LIBFT) $(OBJ)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJ)

%.o: %.c ft_printf.h
	$(CC) -Wall -Wextra -Werror -c $< -o $@
	
clean:
	rm -f $(OBJ)
	make clean -C $(LIBFT_PATH)
	
fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT_PATH)

re: fclean all

.PHONY: all clean fclean re