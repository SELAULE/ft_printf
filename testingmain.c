/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testingmain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 12:04:31 by nselaule          #+#    #+#             */
/*   Updated: 2018/08/09 17:35:14 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

/*
**This is my testing main for printf...
**hope it works...
**ft_printf is supposed to pass those tests i didn't go hardcore
**it should also produce the correct return values
*/

int		main(void)
{
    int libc;
    int libft;
    char a = 1;
    int b  = 12365;
    long c = 0x7FFFFFFF;
    
    unsigned char x = 'A';
    unsigned int y  = 54321;
    unsigned long z = 0x4A6F6E00;
    wchar_t unicodestr[6] = {0x0023, 0x0024, 0x0025, 0x0026, 0x0027, '\0'};
    
    char buf [] = "Test String";
    char *p = buf;
    
	printf("FT_PRINTF UNIT TEST\n");
	printf("Results 1 : LIBC PRINTF\nResults 2 : LIBFT FT_PRINTF\n");
    
	printf("--- BASIC TESTS ---\n\n");
	printf("----------TESTING CHARACTERS--------------\n");
    libc = printf("Characters: %c %c \n", 'a', 65);
    libft = ft_printf("Characters: %c %c \n", 'a', 65);
	printf("---------- END OF TESTING CHARACTERS--------------\n");
    if (libc !=  libft)
        printf("Dude your printf returned %d instead of %d, WTF ??\n", libft, libc);
    
    libc = printf("Percent: %%\n");
    libft = ft_printf("Percent: %%\n");
    if (libc !=  libft)
        printf("Dude your printf returned %d instead of %d, WTF ??\n", libft, libc);

    libc = printf("Percent 2: %9%\n");
    libft = ft_printf("Percent 2: %9%\n");
    if (libc !=  libft)
        printf("Dude your printf returned %d instead of %d, WTF ??\n", libft, libc);
    
    libc = printf("Percent 3: %-9%'\n");
    libft = ft_printf("Percent 3: %-9%'\n");
    if (libc !=  libft)
        printf("Dude your printf returned %d instead of %d, WTF ??\n", libft, libc);
    
    libc = printf("Unicode char %C\n", 0x0026);
    libft = ft_printf("Unicode char %C\n", 0x0026);
    if (libc !=  libft)
        printf("Dude your printf returned %d instead of %d, WTF ??\n", libft, libc);
  
    libc = printf("Unicode str %S\n", unicodestr);
    libft = ft_printf("Unicode str %S\n", unicodestr);
    if (libc !=  libft)
        printf("Dude your printf returned %d instead of %d, WTF ??\n", libft, libc);
	
    libc = printf("Decimals: %d %ld\n", 1977, 650000L);
    libft = ft_printf("Decimals: %d %ld\n", 1977, 650000L);
    if (libc !=  libft)
        printf("Dude your printf returned %d instead of %d, WTF ??\n", libft, libc);
    
    libc = printf("Preceding with blanks: %10d \n", 1977);
    libft = ft_printf("Preceding with blanks: %10d \n", 1977);
    if (libc !=  libft)
        printf("Dude your printf returned %d instead of %d, WTF ??\n", libft, libc);
  
    libc = printf("Octal: %o\n", 5000);
    libft = ft_printf("Octal: %o\n", 5000);
    if (libc !=  libft)
        printf("Dude your printf returned %d instead of %d, WTF ??\n", libft, libc);
    
    libc = printf("Preceding with zeros: %010d \n", 1977);
    libft = ft_printf("Preceding with zeros: %010d \n", 1977);
    if (libc !=  libft)
        printf("Dude your printf returned %d instead of %d, WTF ??\n", libft, libc);
    
	libc = printf("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
    libft = ft_printf("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
    if (libc !=  libft)
        printf("Dude your printf returned %d instead of %d, WTF ??\n", libft, libc);
    
    libc = printf("%s \n", "A string");
    libft = ft_printf("%s \n", "A string");
    if (libc !=  libft)
        printf("Dude your printf returned %d instead of %d, WTF ??\n", libft, libc);
    
    libc = printf("char %d int %d long %ld\n",a,b,c);
    libft = ft_printf("char %d int %d long %ld\n",a,b,c);
    if (libc !=  libft)
        printf("Dude your printf returned %d instead of %d, WTF ??\n", libft, libc);
    
    libc = printf("Uchar %u Uint %u Ulong %lu\n",x,y,z);
    libft = ft_printf("Uchar %u Uint %u Ulong %lu\n",x,y,z);
    if (libc !=  libft)
        printf("Dude your printf returned %d instead of %d, WTF ??\n", libft, libc);
    
    libc = printf("xchar %x xint %x xlong %lx\n",x,y,z);
    libft = ft_printf("xchar %x xint %x xlong %lx\n",x,y,z);
    if (libc !=  libft)
        printf("Dude your printf returned %d instead of %d, WTF ??\n", libft, libc);
    
    libc = printf("String %s is at address %p\n",buf,p);
    libft = ft_printf("String %s is at address %p\n",buf,p);
    if (libc !=  libft)
        printf("Dude your printf returned %d instead of %d, WTF ??\n", libft, libc);

    printf("\n--- BONUS FUNCTIONS ---\n");
    
    libc = printf("Width trick: %0*d \n", -15, 10);
    libft = ft_printf("Width trick: %0*d \n", -15, 10);
    if (libc !=  libft)
        printf("Dude your printf returned %d instead of %d, WTF ??\n", libft, libc);

	ft_printf("5 in binary: %b\n", 5);
    ft_printf("42 in binary: %b\n", 42);
    ft_printf("4321 in binary: %b\n", 4321);
    ft_printf("0 in binary: %b\n", 0);
	ft_printf("FLOAT: %.7f\n", 6.8732);
	ft_printf("{white}white{eoc} {red}%s{eoc} {magenta}%s{eoc} {blue}%s{eoc} {yellow}%s{eoc} {green}green{eoc}\n", 
			"red", "magenta", "blue", "yellow");
	printf("\n--- END OF RESULTS ---\n");
    printf("-- Good luck, Queen Moulinette might still humble you ---\n");
    return (0);
}
