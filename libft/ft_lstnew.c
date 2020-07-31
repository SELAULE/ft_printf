/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 11:44:54 by nselaule          #+#    #+#             */
/*   Updated: 2018/06/12 14:26:28 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*fresh;

	fresh = (t_list *)malloc(sizeof(t_list));
	if (!fresh)
		return (NULL);
	fresh->content = (void *)malloc(content_size);
	if (!content || !fresh->content)
	{
		fresh->content = NULL;
		fresh->content_size = 0;
		return (fresh);
	}
	fresh->content = ft_memcpy(fresh->content, content, content_size);
	fresh->content_size = content_size;
	return (fresh);
}
