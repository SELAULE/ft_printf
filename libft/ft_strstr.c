/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 09:35:58 by nselaule          #+#    #+#             */
/*   Updated: 2018/06/12 15:27:18 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	holder(char *str1, char *str2, int index)
{
	int	i;

	i = -1;
	while (str1[index] == str2[++i] && str1[index] && str2[i])
		index++;
	if (str2[i] == '\0')
		return (1);
	return (0);
}

char		*ft_strstr(const char *haystack, const char *needle)
{
	int	i;

	i = 0;
	if (needle[i] == 0)
		return ((char*)haystack);
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			if (holder((char*)haystack, (char*)needle, i))
				return ((char*)&haystack[i]);
		}
		i++;
	}
	return (0);
}
