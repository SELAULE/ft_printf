/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 10:47:22 by nselaule          #+#    #+#             */
/*   Updated: 2018/07/26 10:47:25 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ret_putstr(char *s)
{
    int i;

    i = 0;
    while (s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
    return (i);
}

void     ret_putchar(char c, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        write(1, &c, 1);
        i++;
    }
}

void     ret_putnstr(char *s, int n)
{
    int i;

    i = 0;
    while (s[i] && i < n)
    {
        write(1, &s[i], 1);
        i++;
    }
}

int     ft_print_str( t_printf **strrs, va_list args)
{
    int fill_me;
    char *str;
    int ret;

    ret = 0;
    str = va_arg(args, char *);
    if((*strrs)->width > ft_strlen((!str) ? VOID_STR : str))
    {
        fill_me = (*strrs)->width - ft_strlen((!str) ? VOID_STR : str);
        if ((*strrs)->flags == '-')
        {
            ret_putstr((!str) ? VOID_STR : str);
            ret_putchar(' ', fill_me);
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
