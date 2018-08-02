/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 15:04:14 by nselaule          #+#    #+#             */
/*   Updated: 2018/06/16 21:28:10 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_isspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\r')
		return (1);
	return (0);
}

char			*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	len;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (ft_isspace(s<:i:>))
		i++;
	len = ft_strlen(s) - 1;
	while (len > i && ft_isspace(s<:len:>))
		len--;
	return (len < i) ? (ft_strdup("")) : (ft_strsub(s, i, len - i + 1));
}
