/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 13:22:37 by nselaule          #+#    #+#             */
/*   Updated: 2018/06/09 17:19:12 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*str;
	unsigned char	*dest;
	size_t			i;

	i = 0;
	str = (unsigned char*)src;
	dest = (unsigned char*)dst;
	if (dest < str)
	{
		return (ft_memcpy(dst, src, len));
	}
	if (dest > str)
	{
		while (len > 0)
		{
			len--;
			dest[len] = str[len];
		}
	}
	return (dest);
}
