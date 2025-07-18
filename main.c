#include "printf.h"
#include <stdio.h>

int main()
{
	char *str = "asd12  3asd";

	printf("Real:%%\n");
	ft_printf("Mine:%%\n\n");

	printf("Real:%\n");
	ft_printf("Mine:%\n\n");

	printf("Real:%c\n", 'P');
	ft_printf("Mine:%c\n\n", 'P');

	printf("Real:%s\n", "oSSmaN");
	ft_printf("Mine:%s\n\n", "oSSmaN");

	printf("Real:%d\n", 6543);
	ft_printf("Mine:%d\n\n", 6543);

	printf("Real:%i\n", 6543);
	ft_printf("Mine:%i\n\n", 6543);

	printf("Real:%u\n", 2147483655);
	ft_printf("Mine:%u\n\n", 2147483655);

	printf("Real:%x\n", 1234567);
	ft_printf("Mine:%x\n\n", 1234567);

	printf("Real:%X\n", 1234567);
	ft_printf("Mine:%X\n\n", 1234567);

	printf("Real:%p\n", str);
	ft_printf("Mine:%p\n\n", str);

	printf("Real: %  d \n", 6543);
	ft_printf("Mine: %  d  \n\n", 6543);

	printf("Real:%%%%%\n");
	ft_printf("Mine:%%%%%\n\n");

	printf("Real:%k\n");
	ft_printf("Mine:%k\n\n");

	ft_printf("Mine:   %   s         %  s   \n", "OSMaN");
	ft_printf("Mine:  %   s         %  s  \n\n", "OSMaN");

	printf("Real:  %   s           %  s  \n", "OSMaN");
	printf("Real:  %  s         %   s    \n\n", "OSMaN");

	printf(" ");
	ft_printf(" ");
}
