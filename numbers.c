/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 16:00:55 by nselaule          #+#    #+#             */
/*   Updated: 2018/08/02 16:00:57 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long long   get_value(t_printf **strrs, va_list args)
{
    int c;
    long long ret;

    c = (*strrs)->len;
    if (c == 1)
    ret = va_args(args, unsigned char);
        if (c == 2)
    ret = va_args(args, short int);
        if (c == 3)
    ret = va_args(args, long int);
        if (c == 4)
    ret = va_args(args, long long int);
        if (c == 5)
    ret = va_args(args, intmax_t);
        if (c == 6)
    ret = va_args(args, size_t);
        if (c == 0)
    ret = va_args(args, int);
    return (ret);
}

int     print_num(t_printf **strrs, va_list args)
{
    int fill_me;
    char *str;
    int ret;
    int sign;

    str = ft_itoa_base(get_value(strrs, args), 10);
    ret = 0;
    sign = 0;
    if ((*strrs)->precis > ft_strlen(str))
    {
        fill_me = *(strrs)->precis - ft_strlen(str);
        ret_putchar('0', fill_me);
        ret_putstr(str);
        return(((*strrs)->precis));
    }
    if ((*strrs)->width > ft_strlen(str) + (((*strrs)->flags = '+') ? 1 : 0))
    {
        if ((*strrs)->flags == '+')
        sign = 1;
        if ((*strrs)->flags == '0' && str[0] == '-')
        {
            ret_putchar('-', 1);
            str++;
            ret = 1;
        }
        if ((*strrs)->flags != '-')
        ret_putchar((((*strrs)->flags == '0') ? '0' : ' '), (sign || ret) ?
        (*strrs)->width - ft_strlen(str) - 1 : 
         (*strrs)->width - ft_strlen(str));
         if (sign && str[0] == '-')
         ret_putchar('+', 1);
         ret_putstr(str);
         if ((*strrs)->flags == '-')
         ret_putchar(' ', (*strrs)->width - ft_strlen(str));
         return ((*strrs)->width);
    }
    ret = ft_strlen(str);
    (str) ? free(str) : 0;
    return (ret);
}
