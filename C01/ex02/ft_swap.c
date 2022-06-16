#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main(void)
{
	int x;
	int y;

	x = 25;
	y = 50;
	printf("Before: %d %d\n", x, y);
	ft_swap(&x,&y);
	printf("After: %d %d\n", x, y);
}
