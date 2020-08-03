/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num_oct.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 07:28:37 by nselaule          #+#    #+#             */
/*   Updated: 2018/08/17 08:26:04 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	cut_oct(t_printf **strrs, char *str, int ret, int sign)
{
	if ((*strrs)->width > ft_strlen(str) + (((*strrs)->flags == '+') ? 1 : 0))
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
		if ((*strrs)->flags == '#')
		{
			ft_putchar(43);
			ret += 1;
		}
		return ((*strrs)->width);
	}
	ret = ft_strlen(str);
	
	ret_putstr(str);
	(str) ? free(str) : 0;
	return (ret);
}

int			print_num_oct(t_printf **strrs, va_list args)
{
	int		fill_me;
	char	*str;
	int		ret;
	int		sign;

	str = ft_itoa_base(get_value_uns(strrs, args), 8);
	ret = 0;
	sign = 0;
	if ((*strrs)->precis > ft_strlen(str))
	{
		fill_me = (*strrs)->precis - ft_strlen(str);
		ret_putchar('0', fill_me);
		ret_putstr(str);
		return (((*strrs)->precis));
	}
	return (cut_oct(strrs, str, ret, sign));
}
