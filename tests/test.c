#include <string.h>
#include "../ft_printf.h"

int		main(void)
{
	char 	*str = strdup("hello univers");
	char	*name = strdup("number four");

	ft_printf("the string is %s and it's place is %s lol\n", str, name);
	return (0);
}
