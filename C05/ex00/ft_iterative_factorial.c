#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int i = nb - 1;

	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}

	while (i >= 1)
	{
		nb *= i;
		i--;
	}
	return (nb);
}

int	main(void)
{
	printf("%d (Expected: 5040)\n", ft_iterative_factorial(7));
	printf("%d (Expected: 120)\n", ft_iterative_factorial(5));
	printf("%d (Expected: 1)\n", ft_iterative_factorial(0));
	printf("%d (Expected: 0)\n", ft_iterative_factorial('j'));
	printf("%d (Expected: 0)\n", ft_iterative_factorial(-6));
}
