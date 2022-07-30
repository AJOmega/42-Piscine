#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int i;
	int p = 1;

	if (argc > 1)
	{
		while (p < argc)
		{
			i = 0;

			while (argv[p][i] != '\0')
			{
				if (argv[p][i] >= 65 && argv[p][i] <= 90)
				{
					argv[p][i] += 32;
				}
				else if (argv[p][i] >= 97 && argv[p][i] <= 122)
				{
					argv[p][i] -= 32;
				}
				ft_putchar(argv[p][i]);
				i++;
			}
			p++;
			ft_putchar(' ');
		}
	}
	ft_putchar('\n');
	return 0;
}
