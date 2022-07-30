#include <stdio.h>

int	ft_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}

int	main(void)
{
	char str[] = "Hello World";

	printf("Lenght: %d\n", ft_strlen(str));
}
