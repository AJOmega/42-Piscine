#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*b = *a;
	*a = c;
}
