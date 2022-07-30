#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest,char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_strdup(char *src)
{
	char *dest;

	dest = malloc((ft_strlen(src) + 1) * sizeof(char));
	return (dest ? ft_strcpy(dest, src) : dest);
}

int	main(void)
{
	char *before;
	char *after;

	before = "Hello World!";
	printf("before: %s\n", before);
	after = ft_strdup(before);
	printf("after: %s\n", after);
	free(after);
}
