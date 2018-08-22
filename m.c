#include "ft_printf.h"

int main(void)
{
	int x;
//	%#x
	printf("%p::::::\n",&x);
//	p  = va_arg(ap,long)
		ft_printf("%p:\n",&x);
	//printf("%s\n",ft_itoa_base((long)&x,16));
}
