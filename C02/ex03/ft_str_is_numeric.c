#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return 0;
		};
		i++;
	}
	return 1;
}

int	main(void)
{
	char *str;

	str = "123A567";
	printf("%s - %d (Expected - 0)\n", str, ft_str_is_numeric(str));
	str = "123456";
	printf("%s - %d (Expected - 1)\n", str, ft_str_is_numeric(str));
	str = "";
	printf("%s - %d (Expected - 1)\n", str, ft_str_is_numeric(str));
	str = "ASB";
	printf("%s - %d (Expected - 0)\n", str, ft_str_is_numeric(str));
}
