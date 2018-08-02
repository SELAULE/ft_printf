/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 11:20:40 by nselaule          #+#    #+#             */
/*   Updated: 2018/06/12 16:02:51 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t idst;
	size_t c;
	size_t counter;

	c = 0;
	idst = 0;
	while (dst[idst] != '\0' && idst < dstsize)
	{
		c++;
		idst++;
	}
	counter = -1;
	while (src[++counter] != '\0')
	{
		c++;
		if (idst < dstsize)
		{
			dst[idst] = src[counter];
			dst[1 + idst] = '\0';
		}
		idst++;
		if (idst == dstsize)
			dst[--idst] = '\0';
	}
	return (c);
}
