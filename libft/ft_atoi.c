/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 12:15:55 by nselaule          #+#    #+#             */
/*   Updated: 2018/06/16 14:27:50 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long	j;
	int		sign;

	j = 0;
	sign = 1;
	while ((*str == '\v' || *str == '\t' || *str == '\r') ||
			(*str == '\n' || *str == ' ' || *str == '\f'))
		str++;
	if (*str == '-')
		sign = -1;
	else
		sign = 1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && ft_isdigit(*str))
		j = (j * 10) + (*str++ - '0');
	if (j < 0 && sign == -1)
		return (0);
	if (j < 0 && sign == 1)
		return (-1);
	return (sign * j);
}
