#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int i;
	int p = 1;
	int t = 0;

	if (argc > 1)
	{
		while (p < argc)
		{
			i = 0;
			while (argv[p][i] != '\0')
			{
				if (argv[p][i] >= 65 && argv[p][i] <= 90)
				{
					t = argv[p][i] - 64;
				}
				else if (argv[p][i] >= 97 && argv[p][i] <= 122)
				{
					t = argv[p][i] - 96;
				}
				else
				{
					ft_putchar(argv[p][i]);
					//write(1, &argv[p][i], 1);
				}
				while (t >= 1)
				{
					ft_putchar(argv[p][i]);
					//write(1, &argv[p][i], 1);
					t--;
				}
				i++;
			}
			write(1, " ", 1);
			p++;
		}
		write(1, "\n", 1);
	}
	return 0;
}
