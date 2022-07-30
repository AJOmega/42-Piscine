#include <stdio.h>

int	ft_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	char s1[] = "Hello World!";
	char s2[] = "ABBC";
	char s3[] = "QWERTY";

	printf("%d\n", ft_strlen(s1));
	printf("%d\n", ft_strlen(s2));
	printf("%d\n", ft_strlen(s3));
}
