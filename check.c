/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 07:29:33 by nselaule          #+#    #+#             */
/*   Updated: 2018/08/09 17:11:52 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_width(char **format, t_printf **strrs)
{
	char c;

	c = *(*format);
	while (*(*format) >= '0' && *(*format) <= '9') /* while (c >= 0 && c <= 9); */
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
			(*format)++;
		while (*(*format) >= '0' && *(*format) <= '9')
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
		(*strrs)->len = 1;
		(*format)++;
		return ;
	}
	if (c == 'h' && (c + 1) != 'h')
	{
		(*strrs)->len = 2;
		(*format)++;
		return ;
	}
	if (c == 'l' && (c + 1) != 'l')
	{
		(*strrs)->len = 3;
		(*format)++;
		return ;
	}
	if (c == 'l' && (c + 1) == 'l')
	{
		(*strrs)->len = 4;
		(*format)++;
		return ;
	}
	if (c == 'j')
	{
		(*strrs)->len = 5;
		(*format)++;
		return ;
	}
	if (c == 'z')
	{
		(*strrs)->len = 6;
		(*format)++;
		return ;
	}
}

int		check_specifier(char **format, t_printf **strrs, va_list args)
   {
   int	ret = 0;
   char c;

   c = (**format);
   if (c == 's' || c == 'S') /*ft_strchr(*(format), 's') || ft_strchr((*format), 'S')*/
	 ret = ft_print_str(strrs, args);
   if (c == 'd' || c == 'i')/* ft_strchr(*(format), 'd') || ft_strchr((*format), 'i')*/
	   ret = print_num(strrs, args);
   return (ret);
   }
