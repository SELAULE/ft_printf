/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 11:47:21 by nselaule          #+#    #+#             */
/*   Updated: 2018/06/09 17:11:35 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	*str;
	size_t			i;

	i = 0;
	dest = (unsigned char*)dst;
	str = (unsigned char*)src;
	while (i < n)
	{
		dest[i] = str[i];
		if ((unsigned char)c == str[i])
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
