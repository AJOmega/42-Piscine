#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int a = 0;

	i = strlen(dest);

	while (src[a] != '\0')
	{
		dest[i] = src[a];
		a++;
		i++;
	}
	dest[i] = '\0';
	return dest;
}

int	main(void)
{
	char src[] = " World";

	char dest[] = "Hello";

	printf("Before: (src: %s) ", src);
	printf("(dest: %s)\n", dest);
	printf("After: %s\n", ft_strcat(dest, src));
}
