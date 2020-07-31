/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memory.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 13:04:05 by nselaule          #+#    #+#             */
/*   Updated: 2018/08/22 18:47:36 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int				print_mem(va_list args)
{
	char		*str;
	int			ret;
	//t_printf *just = *strrs;

	//just = NULL;
	
	long long i = va_arg(args,long long);
	str = ft_itoa_base(i, 16); 
	ret = 0;
	ret += ret_putstr("0x");
	ret_putstr(str);
	ret += ft_strlen(str);
	(str) ? free(str) : 0;
	return (ret);
}
