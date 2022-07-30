#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return 0;
		}
		i++;
	}
	return 1;
}

int	main(void)
{
	char *str = "HELLO";

	printf("%s - %d (Expected: 1)\n", str, ft_str_is_uppercase(str));
	str = "hello";
	printf("%s - %d (Expected: 0)\n", str, ft_str_is_uppercase(str));
	str = "";
	printf("%s - %d (Expected 1)\n", str, ft_str_is_uppercase(str));
	str = "heLl0";
	printf("%s - %d (Expected 0)\n", str, ft_str_is_uppercase(str));
}
