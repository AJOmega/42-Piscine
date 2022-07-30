#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i <= n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	char *src;
	char dest[20];

	src = "Hello World";
	strncpy(dest, src, 8);
	printf("Strncpy: %s\n", dest);
	ft_strncpy(dest, src, 8);
	printf("ft_strncpy: %s\n", dest);
}
