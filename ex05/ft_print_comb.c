#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 1;
	c = 2;
	while (a <= 7 || b <= 8 || c <= 9)
	{
		while (b <= 8 || c <= 9)
		{
			while (c <= 9)
			{
				ft_putchar(a + '0');
				ft_putchar(b + '0');
				ft_putchar(c + '0');
				ft_putchar(',');
				ft_putchar(' ');
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
	}
	a--;
	b--;
	c--;
	ft_putchar(a + '0');
	ft_putchar(b + '0');
	ft_putchar(c + '0');
}

int	main(void)
{
	ft_print_comb();
	ft_putchar('\n');
	return (0);
}
