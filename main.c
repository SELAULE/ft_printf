#include  "ft_printf.h"
int		main(void)
{
	ft_printf("Preceding with blanks: %10d \n", 1977);
	ft_printf("%-600d :\n", 42);
	printf("%lu :\n", sizeof(intmax_t));
//	printf("%lu :", sizeof(ptrdiff_t));
	printf("%lu :\n", sizeof(long long int));
	return (0);
}