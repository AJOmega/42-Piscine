#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int value = nb;
	if (power == 0)
	{
		return 1;
	}
	if (power < 0)
	{
		return 0;
	}
	if (power == 1)
	{
		return nb;
	}
	while (power >= 2)
	{
		nb *= value;
		power--;
	}
	return (nb);
}

int	main(void)
{
	printf("%d (5)\n", ft_iterative_power(5, 1));
	printf("%d (1)\n", ft_iterative_power(5, 0));
	printf("%d (0)\n", ft_iterative_power(5, -7));
	printf("%d (25)\n", ft_iterative_power(5, 2));
	printf("%d (3125)\n", ft_iterative_power(5, 5));
}
