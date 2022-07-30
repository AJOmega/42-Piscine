#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return 0;
		}
		i++;
	}
	return 1;
}

int	main(void)
{
	char *str;

	str = "abC";
	printf("%s - %d (Expected - 0)\n", str, ft_str_is_lowercase(str));
	str = "abc";
	printf("%s - %d (Expected - 1)\n", str, ft_str_is_lowercase(str));
	str = "";
	printf("%s - %d (Expected - 1)\n", str, ft_str_is_lowercase(str));
	str = "ABC";
	printf("%s - %d (Expected - 0)\n", str, ft_str_is_lowercase(str));
}
