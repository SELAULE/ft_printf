/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 09:45:09 by nselaule          #+#    #+#             */
/*   Updated: 2018/06/10 12:43:55 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	to_c;
	char	*str;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	to_c = (char)c;
	str = (char*)s;
	if (str[i] == to_c)
		return (str);
	while (str[i])
	{
		if (to_c == str[i])
			return (str + i);
		i++;
	}
	if (str[i] == to_c)
		return (str + i);
	if (!str)
		return (str);
	return (NULL);
}
