#include <string.h>
#include <stdio.h>

char*	ft_strcpy(char *dest, char *src)
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

int	main(void)
{
	char *src;
	char dest[20];
	char *src2;
	char dest2[5];

	src = "Hello World";
	src2 = "Hello World";
	ft_strcpy(dest, src);
	//puts(dest);
	printf("dest: %s\n", dest);
	strcpy(dest2, src2);
	//puts(dest2);
	printf("dest2: %s\n", dest2);
}
