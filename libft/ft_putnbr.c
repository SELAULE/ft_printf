/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 11:12:33 by nselaule          #+#    #+#             */
/*   Updated: 2018/06/10 12:33:32 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_long(long n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	if (n >= 10)
	{
		ft_long(n / 10);
		ft_long(n % 10);
	}
	else
	{
		ft_putchar(n + '0');
	}
}

void		ft_putnbr(int n)
{
	ft_long((long)n);
}
