/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 11:19:38 by nselaule          #+#    #+#             */
/*   Updated: 2018/06/06 13:36:33 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char	*dest;
	char	*str;
	int		j;

	dest = (char *)dst;
	str = (char *)src;
	i = 0;
	j = (int)n;
	while (j > i)
	{
		dest[i] = str[i];
		i++;
	}
	return (dest);
}
