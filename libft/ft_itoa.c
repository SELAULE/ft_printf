/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 11:45:15 by nselaule          #+#    #+#             */
/*   Updated: 2018/06/16 19:15:49 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		get_size(int nbr, int base)
{
	int i;

	i = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0 && base == 10)
		i = 1;
	while (nbr != 0)
	{
		nbr /= base;
		i++;
	}
	return (i);
}

static	void	ft_convert(long nbr, char *str, int base, int *i)
{
	if (nbr < 0 && base == 10)
	{
		nbr *= -1;
		str[*i] = '-';
		*i = *i + 1;
	}
	else if (nbr < 0)
		nbr *= -1;
	if (nbr >= base)
	{
		ft_convert(nbr / base, str, base, i);
		ft_convert(nbr % base, str, base, i);
	}
	else
	{
		str[*i] = '0' + nbr;
		*i = *i + 1;
	}
}

char			*ft_itoa(int n)
{
	int		i;
	char	*str;

	i = get_size(n, 10);
	str = (char *)malloc(sizeof(char ) * i + sizeof(char));
	if (str == NULL)
		return (str);
	i = 0;
	ft_convert(n, str, 10, &i);
	str[i] = '\0';
	return (str);
}
