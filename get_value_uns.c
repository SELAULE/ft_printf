/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_value_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 13:06:46 by nselaule          #+#    #+#             */
/*   Updated: 2018/08/17 08:09:00 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long long		get_value_uns(t_printf **strrs, va_list args)
{
	int			c;
	long long	ret;

	c = (*strrs)->len;
	if (c == 1)
		ret = (unsigned char)va_arg(args, int);
	if (c == 2)
		ret = (unsigned short int)va_arg(args, int);
	if (c == 3)
		ret = va_arg(args, unsigned long int);
	if (c == 4)
		ret = va_arg(args, unsigned long long int);
	if (c == 5)
		ret = va_arg(args, uintmax_t);
	if (c == 6)
		ret = va_arg(args, size_t);
	if (c == 0)
		ret = va_arg(args, unsigned int);
	return (ret);
}
