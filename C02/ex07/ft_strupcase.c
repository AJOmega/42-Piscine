#include <stdio.h>

char*	ft_strupcase(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return str;
}

int	main(void)
{
	char a_str[] = "abc";
	char *str;

	str = a_str;
	printf("Before: %s\n", str);
	printf("After: %s\n", ft_strupcase(str));

	char b_str[] = "abCdE";

	str = b_str;
	printf("Before: %s\n", str);
	printf("After: %s\n", ft_strupcase(str));
}
