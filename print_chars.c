/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_chars.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 18:34:48 by nselaule          #+#    #+#             */
/*   Updated: 2018/08/10 18:34:50 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     print_chars( t_printf **strrs, va_list args)
{
    int fill_me;
    char str;
    int ret;

    ret = 0;
    str = va_arg(args, int);
    if((*strrs)->width > ft_strlen((!str) ? VOID_STR : str))
    {
        fill_me = (*strrs)->width - ft_strlen((!str) ? VOID_STR : str);
        if ((*strrs)->flags == '-')
        {
            ret_putstr((!str) ? VOID_STR : str);
            ret_putchar(' ', 1);
        }
        else
        {
            ret_putchar(((*strrs)->flags == '0') ? '0' : ' ' , fill_me);
            ret_putstr((!str) ? VOID_STR : str);
        }
        return ((*strrs)->width);
    }
     if ((*strrs)->precis < ft_strlen((!str) ? VOID_STR : str) && (*strrs)->precis > 0)
        {
            ret_putnstr((!str) ? VOID_STR : str, (*strrs)->precis);
            return ((*strrs)->precis);
        }
        ret = ret_putstr((!str) ? VOID_STR : str);
        return (ret);
}
