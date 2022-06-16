#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int x = 10;
	int y = 2;
	int div;
	int mod;
	ft_div_mod(x, y, &div, &mod);
	printf("Division: %d (Must be 5)\n", div);
	printf("Mod: %d (Must be 0)\n", mod);
}
