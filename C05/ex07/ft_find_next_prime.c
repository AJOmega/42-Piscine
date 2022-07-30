#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int i = 2;
	int div;

	while (i <= 10)
	{
		if (nb < 2)
		{
			return 2;
		}
		if (nb == i)
		{
			i++;
			continue;
		}

		div = nb % i;
		i++;
		if (div == 0)
		{
			nb += 1;
			i = 2;
		}
	}
	return nb;
}

int	main(void)
{
	printf("%d (2)\n", ft_find_next_prime(2));
	printf("%d (17)\n", ft_find_next_prime(14));
	printf("%d (2)\n", ft_find_next_prime(1));
	printf("%d (2)\n", ft_find_next_prime(0));
	printf("%d (2)\n", ft_find_next_prime(-5));
	printf("%d (73)\n", ft_find_next_prime(72));
}
