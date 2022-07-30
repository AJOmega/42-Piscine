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

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int a = 0;

	i = ft_strlen(dest);
	while (a <= nb)
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	dest[i] = '\0';
	return dest;
}

int	main(void)
{
	char dest[] = "Hello";
	char src[] = " World Motherfuckers";

	printf("%s\n", ft_strncat(dest, src, 12));
}
