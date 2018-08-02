# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nselaule <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/12 10:09:55 by nselaule          #+#    #+#              #
#    Updated: 2018/07/12 10:10:00 by nselaule         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#ifndef FT_PRINTF.H
#define FT_PRINTF.H

SRC = *.c;
FLAGS = -Wall -Wextra -Werror
OBJ = *.o
all:
	gcc -c $(FLAGS) $(SRC)
	ar rc $(OBJ)
run:	
	./a.out
