#include "ft_printf.h"

long long   get_value_uns(t_printf **strrs, va_list args)
{
    int c;
    long long ret;

    c = (*strrs)->len;
    if (c == 1)
    ret = va_args(args, unsigned char);
        if (c == 2)
    ret = va_args(args, unsigned short int);
        if (c == 3)
    ret = va_args(args, unsigned long int);
        if (c == 4)
    ret = va_args(args, unsigned long long int);
        if (c == 5)
    ret = va_args(args, uintmax_t);
        if (c == 6)
    ret = va_args(args, size_t);
        if (c == 0)
    ret = va_args(args, int);
    return (ret);
}