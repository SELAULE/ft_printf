/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 10:09:36 by nselaule          #+#    #+#             */
/*   Updated: 2018/08/10 08:26:33 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
//#include <stdint.h>/***********************DELETE*****************************/
#include "libft/libft.h"
#define VOID_STR "(null)"
#include <stdio.h>
typedef	struct	s_printf
{
	int			width;
	int			precis;
	int			flags;
	int			len;
}				t_printf;

int				ft_printf(const char *format, ...);
void			check_flags(char **format,t_printf **strrs);
void			check_precis(char **format, t_printf **strrs);
void			check_width(char **format, t_printf **strrs);
void			check_length(char **format, t_printf **strrs);
int				ft_print_str( t_printf **strrs, va_list args);
int				print_num(t_printf **strrs, va_list args);
char			*ft_itoa_base(long long n, int base);
char			*ft_itoa_base_upper(long long n, int base);
int				len_base(long long nb, int base);
int				ret_putstr(char *s);
int				print_chars( t_printf **strrs, va_list args);
void			ret_putchar(char c, int n);
void			ret_putnstr(char *s, int n);
long long		get_value(t_printf **strrs, va_list args);
int				print_num_hex_upper(t_printf **strrs, va_list args);
int				check_specifier(char **format, t_printf **strrs, va_list args);
int				print_num_hex(t_printf **strrs, va_list args);
int				print_num_oct_upper(t_printf **strrs, va_list args);
int				print_num_oct(t_printf **strrs, va_list args);
long long		get_value_uns(t_printf **strrs, va_list args);
#endif
