#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int *p;
	int i = 0;

	if (min >= max)
	{
		return 0;
	}
	p = malloc(max - min);
	if (p == NULL)
	{
		return 0;
	}
	while (min < max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}

void	debug_dump_array(int numbers[], int size)
{
	int i = 0;

	printf("[");
	while (i < size)
	{
		printf("%d", numbers[i]);
		if (i != size - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf(" ]");
}

int	main(void)
{
	int min;
	int max;

	min = 5;
	max = 10;
	printf("min = %d, max = %d -> ", min, max);
	debug_dump_array(ft_range(min,max), max - min);
	printf("\n");
}
