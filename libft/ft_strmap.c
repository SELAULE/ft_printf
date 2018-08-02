/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 16:32:07 by nselaule          #+#    #+#             */
/*   Updated: 2018/06/04 11:55:34 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	int				i;
	char			*fresh;

	i = 0;
	if (!s)
		return (NULL);
	fresh = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!fresh)
		return (0);
	while (s[i] != '\0')
	{
		fresh[i] = f(s[i]);
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
