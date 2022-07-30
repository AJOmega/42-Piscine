#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int bound;
	int i = 0;
	int *buffer;

	if(min >= max)
	{
		*range = 0;
		return 0;
	}
	bound = max - min - 1;
	if ((buffer = malloc(bound * sizeof(int))) == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	while (i <= bound)
	{
		buffer[i] = min + i;
		i++;
	}
	return (bound + 1);
}

void	debug_dump_array(int numbers[], int size)
{
	int i = 0;
	printf("[ ");
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
	int min = 5;
	int max = 10;
	int *range;
	int bound;

	bound = ft_ultimate_range(&range, min, max);
	printf("min = %d, max = %d -> (bound = %d) ", min, max, bound);
	fflush(stdout);
	debug_dump_array(range, bound + 2);
}
