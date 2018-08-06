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
#include <stdio.h>/********************DELETE*******************************/

void    print_mem(void v)
{
    long long *ptr;

    ptr = malloc(sizeof(long long));
    ptr = &v;
    write(1, &ptr, 1);
}

int     main(void)
{
    char c;

    c = 42;
    print_mem((char)c);
}