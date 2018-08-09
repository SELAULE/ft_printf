# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nselaule <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/12 10:09:55 by nselaule          #+#    #+#              #
#    Updated: 2018/08/09 16:31:39 by nselaule         ###   ########.fr        #
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
	make -C libft/
	@gcc -c $(FLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean :
	make -C libft/
	rm -f $(OBJ)

fclean : clean
	make -C libft/ fclean 
	rm -rf $(NAME)

re : fclean all
