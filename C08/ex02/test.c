#include "ft_abs.h"
#include <stdio.h>

int	main(void)
{
	int i = -5;

	while (i < 5)
	{
		printf("(Before: %d ) After: %d\n", i, ABS(i));
		i++;
	}
}
