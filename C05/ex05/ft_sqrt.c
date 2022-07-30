#include <stdio.h>

int	ft_sqrt(int nb)
{
	int sub = 1;
	int i = 0;

	while (nb > 0)
	{
		i++;
		nb -= sub;
		sub = sub + 2;
	}
	if (nb == 0)
	{
		return i;
	}
	else
	{
		return 0;
	}
}

int	main(void)
{
	printf("%d\n", ft_sqrt(5));
	printf("%d\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(-10));
}
