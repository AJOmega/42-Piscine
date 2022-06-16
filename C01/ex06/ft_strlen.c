#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	char str[] = "Hello";
	int lenght  = ft_strlen(str);
	printf("Lenght:%d (Expected 5)\n", lenght);
}
