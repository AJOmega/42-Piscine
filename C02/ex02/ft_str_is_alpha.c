#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
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

	str = "Hello World";
	printf("%s - %d (Expected - 0)\n", str, ft_str_is_alpha(str));
	str = "H1LLO W0RLD";
	printf("%s - %d (Expected - 0)\n", str, ft_str_is_alpha(str));
	str = "HelloWorld";
	printf("%s - %d (Expected - 1)\n", str, ft_str_is_alpha(str));
	str = "";
	printf("%s - %d (Expected - 1)\n", str, ft_str_is_alpha(str));
}
