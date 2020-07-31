/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 11:13:45 by nselaule          #+#    #+#             */
/*   Updated: 2018/06/05 09:06:19 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_long(long n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	if (n >= 10)
	{
		ft_long(n / 10, fd);
		ft_long(n % 10, fd);
	}
	else
	{
		ft_putchar_fd(n + '0', fd);
	}
}

void			ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	ft_long((int)n, fd);
}
