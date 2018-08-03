#include "ft_printf.h"

int     print_num_hex_upper(t_printf **strrs, va_list args)
{
    int fill_me;
    char *str;
    int ret;
    int sign;

    str = ft_itoa_base_upper(get_value(strrs, args), 16);
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