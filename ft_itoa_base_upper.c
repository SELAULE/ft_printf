#include "ft_printf.h"

int                 len_base(long long nb, int base)
{
    int             len;

    len = 0;
    if (nb < 0)
    {
        nb = -nb;
        if (base == 10)
            len++;
    }
    len++;
    nb /= base;
    while (nb)
    {
        len++;
        nb /= base;
    }
    return (len);
}

char                *ft_itoa_base_upper(long long n, int base)
{
    char            *ret;
    int             s;
    int             i;

    i = len_base(n, base);
    s = 0;
    ret = (char *)malloc(sizeof(char) * (i + 1));
    ret[i--] = '\0';
    if (n < 0)
    {
        n = -n;
        (base == 10) ? s = 1 : 0;
    }
    ret[i--] = (n % base < 10) ? (n % base) + 48 : (n % base) + 55;
    n /= base;
    while (i >= 0)
    {
        if (i == 0 && s == 1)
            ret[i--] = '-';
        ret[i--] = (n % base < 10) ? (n % base) + 48 : (n % base) + 55;
        n /= base;
    }
    return (ret);
}