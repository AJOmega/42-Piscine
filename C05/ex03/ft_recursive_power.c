#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int value = nb;

	if (power == 0)
	{
		return 1;
	}
	if (power == 1)
	{
		return nb;
	}
	if (power < 0)
	{
		return 0;
	}
	if (power >= 2)
	{
		return (value * ft_recursive_power(nb, power - 1));
	}
}

int	main(void)
{
	printf("%d (3125)\n", ft_recursive_power(5, 5));
	printf("%d (25)\n", ft_recursive_power(5, 2));
	printf("%d (1)\n", ft_recursive_power(5, 0));
	printf("%d (0)\n", ft_recursive_power(5, -7));
	printf("%d (0)\n", ft_recursive_power(0, 5));

}
