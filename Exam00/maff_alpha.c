#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int i = 0;
	char abc = 97;

	while (abc <= 122)
	{
		if (i % 2 == 0)
		{
			ft_putchar(abc);
		}
		else
		{
			ft_putchar(abc - 32);
		}
		i++;
		abc++;
	}
	ft_putchar('\n');
}
