/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_precis.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 16:21:09 by nselaule          #+#    #+#             */
/*   Updated: 2018/08/20 16:21:12 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		check_precis(char **format, t_printf **strrs)
{
	char	c;

	c = *(*format);
	if (c == '.')
	{
		(*format)++;
		while (*(*format) >= '0' && *(*format) <= '9')
		{
			(*strrs)->precis = (*strrs)->precis * 10;
			(*strrs)->precis = (*strrs)->precis + c - '0';
			(*format)++;
		}
	}
}
