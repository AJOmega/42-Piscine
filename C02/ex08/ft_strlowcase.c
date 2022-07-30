#include <stdio.h>

char*	ft_strlowcase(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return str;
}

int	main(void)
{
	//char *str;

	//str = "ABC";
	char c_str[] = "ABC";
	char *str;

	str = c_str;
	printf("Before: %s\n", str);
	printf("After: %s\n", ft_strlowcase(str));

	char d_str[] = "AbCDe67";

	str = d_str;
	printf("Before: %s\n", str);
	printf("After: %s\n", ft_strlowcase(str));
}
