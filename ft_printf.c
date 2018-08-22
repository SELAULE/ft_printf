/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 10:09:18 by nselaule          #+#    #+#             */
/*   Updated: 2018/08/16 18:06:35 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		order_of_call(char **format, va_list args, t_printf **strrs)
{
	int	ret;

	(*format)++;
	check_flags(format, strrs);
	check_width(format, strrs);
	check_precis(format, strrs);
	check_length(format, strrs);
	ret = check_specifier(format, strrs, args);
	return (ret);
}

int		ft_printf(const char *format, ...)
{
	va_list		args;
	char		*fmt;
	int			print_char;
	t_printf	*strrs;

	print_char = 0;
	fmt = (char *)format;
	strrs = (t_printf *)malloc(sizeof(t_printf));
	va_start(args, format);
	while (*fmt)
	{
		if (*fmt == '%')
		{
			print_char += order_of_call(&fmt, args, &strrs);
			ft_bzero(strrs, sizeof(t_printf));
		}
		else
		{
			print_char++;
			write(1, fmt++, 1);
		}
	}
	va_end(args);
	free(strrs);
	return (print_char);
}
