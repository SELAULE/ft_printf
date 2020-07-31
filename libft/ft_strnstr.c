/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 09:15:56 by nselaule          #+#    #+#             */
/*   Updated: 2018/06/13 14:04:08 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	holder(char *str1, char *str2, size_t len, size_t index)
{
	size_t	i;

	i = -1;
	while (str1[index] == str2[++i] && index < len && str1[index])
	{
		index++;
	}
	if (str2[i] == '\0')
		return (1);
	return (0);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		ext;

	i = 0;
	ext = 1;
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (haystack[i] != '\0' && i != len && ext)
	{
		if (haystack[i] == needle[0])
		{
			if (holder((char*)haystack, (char*)needle, len, i))
				return ((char*)&haystack[i]);
		}
		i++;
	}
	return (0);
}
