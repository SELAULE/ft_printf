# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nselaule <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/28 09:44:43 by nselaule          #+#    #+#              #
#    Updated: 2018/08/09 13:49:11 by nselaule         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#ifndef LIBFT.H
#define LIBFT.H

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror -g -ggdb3
SRC =	ft_strlen.c ft_memset.c ft_isascii.c ft_isprint.c ft_strdup.c \
		ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_putchar.c	ft_toupper.c \
		ft_putstr.c	ft_tolower.c ft_strcmp.c ft_strncmp.c ft_atoi.c	\
		ft_strcpy.c	ft_strncpy.c ft_strstr.c ft_strnstr.c ft_strchr.c \
		ft_memalloc.c ft_strrchr.c ft_putchar_fd.c ft_memdel.c ft_putendl.c	\
		ft_putendl_fd.c	ft_putnbr.c	ft_putnbr_fd.c ft_putstr_fd.c \
		ft_strnew.c ft_strdel.c ft_strclr.c	ft_striter.c ft_striteri.c	\
		ft_memcpy.c	ft_bzero.c ft_strequ.c ft_strmap.c ft_strmapi.c	\
		ft_strcat.c	ft_strncat.c ft_strsub.c ft_strjoin.c ft_strtrim.c	\
		ft_strnequ.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c	\
		ft_strlcat.c ft_itoa.c ft_strsplit.c \
		ft_lstnew.c		

OBJ =	$(SRC:.c=.o)
	
all: $(NAME)
$(NAME):
	@gcc -c $(FLAGS) $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean: 
	@/bin/rm  -f $(OBJ)

fclean : clean
	@/bin/rm -rf $(NAME) $(OBJ)

re: fclean all
