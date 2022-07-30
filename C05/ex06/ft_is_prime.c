#include <stdio.h>

int	ft_is_prime(int nb)
{
	int i = 2;
	int div;

	if (nb <= 1)
	{
		return 0;
	}
	while (i <= 10)
	{
		if (nb == i)
		{
			i++;
			continue;
		}
		
		div = nb % i;
		if (div == 0)
		{
			return 0;
		}
		i++;
	}
	return 1;
}

int	main(void)
{
	printf("%d (1)\n", ft_is_prime(5));
	printf("%d (0)\n", ft_is_prime(1));
	printf("%d (0)\n", ft_is_prime(10));
	printf("%d (0)\n", ft_is_prime(22));
	printf("%d (1)\n", ft_is_prime(2));
	printf("%d (1)\n", ft_is_prime(97));
}
