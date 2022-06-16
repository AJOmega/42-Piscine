#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;
	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

int	main(void)
{
	int x;
	int y;
	x = 10;
	y = 2;
	ft_ultimate_div_mod(&x, &y);
	printf("Division: %d (Expected: 5)\n", x);
	printf("Mod: %d (Expected: 0)\n", y);
}
