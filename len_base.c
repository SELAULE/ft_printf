/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   len_base.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 16:17:50 by nselaule          #+#    #+#             */
/*   Updated: 2018/08/09 16:28:14 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int					len_base(long long nb, int base)
{
	int				len;

	len = 0;
	if (nb < 0)
	{
		nb = -nb;
		if (base == 10)
			len++;
	}
	len++;
	nb /= base;
	while (nb)
	{
		len++;
		nb /= base;
	}
	return (len);
}

