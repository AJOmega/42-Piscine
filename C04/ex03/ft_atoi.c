#include <stdio.h>

int	ft_atoi(char *str)
{
	int i = 0;
	int s = 1;
	int n = 0;

	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			s *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (str[i] - '0') + (n * 10);
		i++;
	}
	return (n * s);
}

int	main(void)
{
	printf("%d\n", ft_atoi("       ---+---+++-2564++---+dhvd879"));
}
