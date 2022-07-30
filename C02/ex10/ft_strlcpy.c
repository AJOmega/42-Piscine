#include <stdio.h>

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int  size)
{
	int i = 0;

	while (src[i] == size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	return dest;
}

int	main(void)
{
	
