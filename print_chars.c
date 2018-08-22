/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_chars.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 18:34:48 by nselaule          #+#    #+#             */
/*   Updated: 2018/08/22 18:42:50 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		print_chars(t_printf **strrs, char str)
{
	int fill_me;
	int ret;

	ret = 1;
	(*strrs)->width--;
	if ((*strrs)->width > 1)
	{
		fill_me = (*strrs)->width;
		if ((*strrs)->flags == '-')
		{
			ft_putchar(str);
			ret_putchar(' ', fill_me);
		}
		else
		{
			ret_putchar(((*strrs)->flags == '0') ? '0' : ' ', fill_me);
			ft_putchar(str);
		}
		return ((*strrs)->width);
	}
	ft_putchar(str);
	return (ret);
}
