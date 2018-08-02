/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_address.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 10:55:25 by nselaule          #+#    #+#             */
/*   Updated: 2018/07/26 10:55:28 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long long   get_add(void v)
{
    long long *ptr;

    ptr = &v;
    return (ptr);
}

int     main(void)
{
    long long res;

    res = get_add();
    printf("%lld : ", res); 
    return (0);
}