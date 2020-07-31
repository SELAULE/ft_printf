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

NAME	=	ft_printf.a

SRC		=	check.c check_precis.c ft_atoi_base.c \
			ft_itoa_base_upper.c ft_memory.c ft_printf.c ft_putstr.c get_value.c \
			get_value_uns.c numbers.c print_chars.c \
			print_num_hex.c print_num_hex_upper.c print_num_oct.c \
			main.c print_num_oct_upper.c testingmain.c \
	#		tests/test.c tests/testingmain.c  tests/m.c 

FLAGS	=	-Wall -Wextra -g -ggdb3 

OBJ		=	$(SRC:.c=.o)

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) -c $(SRC)
	@make -C libft/
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean :
	@make -C libft/ clean
	@/bin/rm -rf $(OBJ)

fclean : clean
	@make -C libft/ fclean
	@/bin/rm -rf $(NAME)

re : fclean all
