/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 09:03:54 by nselaule          #+#    #+#             */
/*   Updated: 2018/06/13 17:46:19 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *src, char c)
{
	int	count;

	count = 0;
	while (*src)
	{
		if (*src == c)
			src++;
		else
		{
			count++;
			while (*src && *src != c)
				src++;
		}
	}
	return (count);
}

static char	*check_words(char const *src, char c)
{
	char	*str;
	int		j;
	size_t	i;

	j = 0;
	i = ft_strlen(src);
	if (!(str = (char*)malloc(i + 1)))
		return (NULL);
	while (*src && *src != c)
		str[j++] = *src++;
	str[j] = '\0';
	return (str);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		num_count;
	int		x;

	if (!s)
		return (NULL);
	num_count = count_words(s, c);
	if (!(str = (char**)malloc(sizeof(*str) * (num_count + 1))))
		return (NULL);
	x = 0;
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
			str[x] = check_words(s, c);
			x++;
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	str[x] = NULL;
	return (str);
}
