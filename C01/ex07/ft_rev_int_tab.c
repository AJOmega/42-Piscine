#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int index;
	int c_index;
	int copy[];

	index = size - 1;
	c_index = 0;
	while (index >= 0)
	{
		copy[c_index] = tab[i];
		i--;
		c++;
	}
	c = 0;
	while (c < size)
	{
		tab[c] = copy[c_index];
		c++;
	}
}

int	main(void)
{
	int str[] = {1,2,3,4,5};

	int size;

	size = 5;
	printf("Before:%d\n", str);
	ft_rev_int_tab(str, size);
	printf("After:%d (Expected:5,4,3,2,1)\n",str);
}
