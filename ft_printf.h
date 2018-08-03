/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 10:09:36 by nselaule          #+#    #+#             */
/*   Updated: 2018/07/23 14:11:31 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include "libft/libft.h"
#define VOID_STR "(null)"

typedef struct s_printf
{
	int	width;
	int	precis;
	int	flags;
	int	len;
}		t_printf;

void		ft_printf(const char *format, ...);
void		check_flags(char **format,t_printf **strrs);
void		check_precis(char **format, t_printf **strrs);
void		check_width(char **format, t_printf **strrs);
int			ft_putstr(va_list args, t_printf **strrs);
char		*ft_itoa_base(long long n, int base);
int			len_base(long long nb, int base);
int			ret_putstr(char *s);
void 		ret_putchar(char c, int n);
void 		ret_putnstr(char *s, int n);
long long	get_value(t_printf **strrs, va_list args);
#endif
