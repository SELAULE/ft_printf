/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 13:54:22 by nselaule          #+#    #+#             */
/*   Updated: 2018/06/01 15:18:36 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	tc_in_un;
	char			*tc_vo_ch;

	i = 0;
	tc_vo_ch = (char *)b;
	tc_in_un = (unsigned char)c;
	while (len > 0)
	{
		tc_vo_ch[i] = tc_in_un;
		len--;
		i++;
	}
	return (tc_vo_ch);
}
