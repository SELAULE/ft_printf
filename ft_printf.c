/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 10:09:18 by nselaule          #+#    #+#             */
/*   Updated: 2018/08/09 18:16:56 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <strings.h>/*************************DELETE****************************/

int		order_of_call(char **format, va_list args, t_printf **strrs)
{
	int	ret;

	(*format)++;
	check_flags(format, strrs);
//	printf("fmt : %c\n", *(*format));	
	check_width(format, strrs);
//	printf("fmt : %c\n", *(*format));
	check_precis(format, strrs);
//	printf("fmt : %c\n", *(*format));
	check_length(format, strrs);
//	printf("fmt : %c\n", *(*format));
	ret = check_specifier(format, strrs, args);
	(*format) = (*format) + ret;
//	printf("fmt(last) %c\n", *(*format));
	return (ret);
}

int		skip_to_next_segment(char *fmt)
{
	int		i;

	i = 0;
	while (fmt[i] != ' ' && fmt[i] != '\t')
		i++;
	return (i);
}

int		ft_printf(const char *format, ...)
{
	va_list		args;
	char		*fmt;
	int			print_char;
	t_printf	*strrs;
	char		*stop;

	fmt = (char *)format;
	strrs = (t_printf *)malloc(sizeof(t_printf));
	va_start(args, format);

	while (*fmt)
	{
		if (*fmt == '%')
		{
			stop = fmt;
		//	bzero(strrs, sizeof(t_printf));/******************CHANGE**********/
			order_of_call(&fmt, args, &strrs);
			bzero(strrs, sizeof(t_printf));/******************CHANGE**********/
			fmt = stop + skip_to_next_segment(stop);
		}
		else
		{
			print_char = print_char + write(1, fmt, 1);
			fmt++;
		}
	}
	va_end(args);
	free(strrs);
	return (print_char);
}
