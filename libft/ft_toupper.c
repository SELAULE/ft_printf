/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 16:08:04 by nselaule          #+#    #+#             */
/*   Updated: 2018/05/31 17:55:27 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_toupper(int c)
{
	unsigned char result;

	result = 0;
	if (c >= 97 && c <= 122)
		result = c - 32;
	else
		return (c);
	return (result);
}
