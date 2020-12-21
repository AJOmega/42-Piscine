#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char a;

	a = 122;
	while (a >= 'a')
	{
		ft_putchar(a);
		a--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
	ft_putchar('\n');
}
