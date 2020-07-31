/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 08:52:07 by nselaule          #+#    #+#             */
/*   Updated: 2018/05/31 13:41:21 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *memory;

	if (!size)
	{
		return (NULL);
	}
	memory = (void*)malloc(sizeof(*memory) * size);
	if (!memory)
	{
		return (NULL);
	}
	ft_memset(memory, 0, size);
	return (memory);
}
