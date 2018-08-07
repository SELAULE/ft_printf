# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nselaule <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/12 10:09:55 by nselaule          #+#    #+#              #
#    Updated: 2018/08/07 15:43:04 by nselaule         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#ifndef FT_PRINTF.H
#define FT_PRINTF.H

SRC = *.c
NAME = ft_printf.a
FLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:.c=.o)
all: $(NAME)
$(NAME):
	make -C libft
	gcc -c $(FLAGS) $(SRC)
	ar rc $(NAME) $(OBJ) libft/libft.a
	ranlib $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -rf $(NAME)

re :
	fclean all
