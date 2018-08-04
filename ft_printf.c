/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 10:09:18 by nselaule          #+#    #+#             */
/*   Updated: 2018/07/23 12:37:33 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <strings.h>/*************************DELETE****************************/

void	order_of_call(char **format, va_list args, t_printf **strrs)
{
	(*format)++;
	check_flags(format, strrs);
	check_width(format, strrs);
	check_precis(format, strrs);
	check_length(format, strrs);
	return ;
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	char	*fmt;
	int		print_char;
	t_printf *strrs;

	fmt = (char *)format;
	strrs = (t_printf *)malloc(sizeof(t_printf));
	va_start(args, format);

	while (*fmt)
	{

		if (*fmt == '%')
		{
			bzero(strrs, sizeof(t_printf));
			order_of_call(&fmt, args, &strrs);
		}
		else
		{
			print_char = print_char + write(1, fmt, 1);
			fmt++;
		}
	}
	free(strrs);
	va_end(args);
	return (print_char);
}