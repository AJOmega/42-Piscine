#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int i = 0;
	int last = argc - 1;
	if (argc >= 1)
	{
		while (argv[last][i])
		{
			//ft_putchar(argv[-1][i]);
			write(1, &argv[last][i], 1);
			i++;
		}
		ft_putchar('\n');
	}

	return 0;
}
