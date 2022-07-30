#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i = 0;
	int value = 0;
	int sign = 1;

	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
			{
				sign = -1;
			}
		}
		else if (str[i] >= 48 && str[i] <= 57)
		{
			//value = (int)(str - '0');
			value = value * 10 + str[i] - '0';
		}
		else
		{
			return (sign * value);
		}
		i++;
	}
	return (sign * value);
}

int	main(void)
{
	char *str = "-67F78";

	printf("%d\n", ft_atoi(str));
}
