/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 08:54:45 by nselaule          #+#    #+#             */
/*   Updated: 2018/07/02 10:23:59 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*nouveau;

	if (!(nouveau = (char*)malloc(sizeof(*nouveau) * (size + 1))))
		return (NULL);
	nouveau = (char*)ft_memset(nouveau, 0, size + 1);
	return (nouveau);
}
