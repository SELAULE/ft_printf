/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 07:29:33 by nselaule          #+#    #+#             */
/*   Updated: 2018/07/23 14:18:10 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_width(char **format, t_printf **strrs)
{
	char c;

	c = *(*format);
	while (*(*format) >= 0 && *(*format) <= 9) /* while (c >= 0 && c <= 9); */
	{
		(*strrs)->width = (*strrs)->width * 10;
		(*strrs)->width = (*strrs)->width + c -'0';
		(*format)++;
	}
}

void	check_precis(char **format, t_printf **strrs)
{
	char c;

	c = *(*format);
	if (c == '.')
	{
		while (*(*format) >= 0 && *(*format) <= 9)
		{
			(*strrs)->precis = (*strrs)->precis * 10;
			(*strrs)->precis = (*strrs)->precis + c -'0';
			(*format)++;
		}
	}
}

void	check_flags(char **format, t_printf **strrs)
{
	char c;

	c = *(*format);
	if (c == '-' || c == '+' || c == '#' || c == '0' || c == ' ')
	{
		(*strrs)->flags = c;
		(*format)++;
	}
}
void	check_length(char **format, t_printf **strrs)
{
	char c;

	c = *(*format);
	if (c == 'h' && (c + 1) == 'h')
	{
		(*format)->len = 1;
		(*format)++;
		return ;
	}
	if (c == 'h' && (c + 1) != 'h')
	{
		(*format)->len = 2;
		(*format)++;
		return ;
	}
	if (c == 'l' && (c + 1) != 'l')
	{
		(*format)->len = 3;
		(*format)++;
		return ;
	}
	if (c == 'l' && (c + 1) == 'l')
	{
		(*format)->len = 4;
		(*format)++;
		return ;
	}
	if (c == 'j')
	{
		(*format)->len = 5;
		(*format)++;
		return ;
	}
	if (c == 'z')
	{
		(*format)->len = 6;
		(*format)++;
		return ;
	}
}

   int		check_specifier(va_list **args, t_printf **strrs)
   {
   int	ret;
   char c;

   if (c == 's' || c == 'S')
   ret = va_args(args, char *);
   
   }
