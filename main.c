#include  "ft_printf.h"
#include <stdio.h>



int		main(void)
{

    int origin;
    origin = printf ("Preceding with blanks: %d \n", ' ');
    int fake;
    fake  = ft_printf ("Preceding with blanks: %d \n", ' ');
    if (origin != fake)
        printf("Dude no origin : %d and fake : %d\n", origin, fake);
    else
    {
        printf("Welldone\n");
    }
  

	return (0);
}
