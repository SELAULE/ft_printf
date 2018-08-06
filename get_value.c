#include "ft_printf.h"

long long   get_value(t_printf **strrs, va_list args)
{
    int c;
    long long ret;

    c = (*strrs)->len;
    if (c == 1)
    ret = (unsigned char)va_arg(args, int);
        if (c == 2)
    ret = (short int)va_arg(args, int);
        if (c == 3)
    ret = va_arg(args, long int);
        if (c == 4)
    ret = va_arg(args, long long int);
        if (c == 5)
    ret = va_arg(args, intmax_t);
        if (c == 6)
    ret = va_arg(args, size_t);
        if (c == 0)
    ret = va_arg(args, int);
    return (ret);
}
