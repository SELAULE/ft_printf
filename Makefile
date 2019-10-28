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

NAME = ft_printf.a

SRC = check.c check_precis.c ft_atoi_base.c ft_itoa_base.c \
		ft_itoa_base_upper.c ft_memory.c ft_printf.c ft_putstr.c get_value.c \
		get_value_uns.c len_base.c tests/m.c tests/main.c numbers.c print_chars.c \
		print_num_hex.c print_num_hex_upper.c print_num_oct.c \
		print_num_oct_upper.c tests/test.c tests/testingmain.c

FLAGS = -Wall -Wextra -Werror -g -ggdb3

OBJ = $(SRC:.c=.o)

all: $(NAME)
$(NAME): $(OBJ)
	make -C libft/ all
	@gcc $(FLAGS) $(OBJ) -o $(NAME) -L libft/libft.a
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean :
	make -C libft/ clean
	rm -f $(OBJ)

fclean : clean
	make -C libft/ fclean
	rm -rf $(NAME)

re : fclean all
