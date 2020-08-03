/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 07:29:33 by nselaule          #+#    #+#             */
/*   Updated: 2018/08/16 17:49:57 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		check_width(char **format, t_printf **strrs)
{
	while (*(*format) >= '0' && *(*format) <= '9')
	{
		(*strrs)->width = (*strrs)->width * 10;
		(*strrs)->width = (*strrs)->width + *(*format) - '0';
		(*format)++;
	}
}

void		check_flags(char **format, t_printf **strrs)
{
	char c;

	c = *(*format);
	if (c == '-' || c == '+' || c == '#' || c == '0' || c == ' ')
	{
		(*strrs)->flags = c;
		(*format)++;
	}
}

void		fuck(char **format, t_printf **strrs)
{
	char	c;

	c = *(*format);
	if (c == 'h' && (c++) == 'h')
	{
		(*strrs)->len = 1;
		(*format) += 2;
		return ;
	}	
	
	else if (c == 'h' && (c + 1) != 'h')
	{
		(*strrs)->len = 2;
		(*format)++;
		return ;
	}
	else if (c == 'j')
	{
		(*strrs)->len = 5;
		(*format)++;
		return ;
	}
}

void		check_length(char **format, t_printf **strrs)
{
	char	c;

	c = *(*format);

	if (c == 'l' && (c++) == 'l')
	{
		(*strrs)->len = 4;
		(*format) += 2;
		return ;
	}

	else if (c == 'z')
	{
		(*strrs)->len = 6;
		(*format)++;
		return ;
	}
	
	else if (c == 'l' && (c + 1) != 'l')
	{
		(*strrs)->len = 3;
		(*format)++;
		return ;
	}
	fuck(format, strrs);
}

int			check_specifier(char **format, t_printf **strrs, va_list args)
{
	int		ret;
	char	c;

	ret = 0;
	c = *(*format);
	if (c == 's' || c == 'S')
		ret = ft_print_str(strrs, args);
	else if (c == 'd' || c == 'i')
		ret = print_num(strrs, args);
	else if (c == 'o')
		ret = print_num_oct(strrs, args);
	else if (c == 'O')
		ret = print_num_oct_upper(strrs, args);
	else if (c == 'x')
		ret = print_num_hex(strrs, args);
	else if (c == 'X')
		ret = print_num_hex_upper(strrs, args);
	else if (c == 'c' || c == 'C')
		ret = print_chars(strrs, c);
	else if (c == 'p')
		ret = print_mem(args);
		else if (c == 'u')
		ret = print_num(strrs, args);
				else if (c == 'U')
		ret = print_num(strrs, args);
	else
		ret = print_chars(strrs, c);
	(*format)++;
	return (ret);
}
