/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 15:59:25 by nselaule          #+#    #+#             */
/*   Updated: 2018/08/16 17:46:58 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoa_base(long long n, int base)
{
	char	*ret;
	int		s;
	int		i;

	i = len_base(n, base);
	s = 0;
	ret = (char *)malloc(sizeof(char) * (i + 1));
	ret[i--] = '\0';
	if (n < 0)
	{
		n = -n;
		(base == 10) ? s = 1 : 0;
	}
	ret[i--] = (n % base < 10) ? (n % base) + 48 : (n % base) + 87;
	n /= base;
	while (i >= 0)
	{
		if (i == 0 && s == 1)
			ret[i--] = '-';
		ret[i--] = (n % base < 10) ? (n % base) + 48 : (n % base) + 87;
		n /= base;
	}
	return (ret);
}
