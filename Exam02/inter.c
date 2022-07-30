#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_diff(char **argv, char *diff, int a)
{
	int i = 0;
	int equal = 0;

	while (diff[i] != '\0')
	{
		if (argv[1][a] == diff[i])
		{
			equal = 1;
			return (equal);
		}
		i++;
	}
	return (equal);
}

int	main(int argc, char **argv)
{
	int a = 0;
	int b;
	char *diff;
	int c = 0;
	int equal;

	if (argc == 3)
	{
		while (argv[1][a] != '\0')
		{
			b = 0;

			while (argv[2][b] != '\0')
			{
				if (argv[1][a] == argv[2][b])
				{
					equal = ft_diff(argv[1][a], diff, a);
					if (equal == 0)
					{
						ft_putchar(argv[1][a]);
					}
					diff[c] = argv[1][a];
					b++;
					c++;
				}
			}
			a++;
		}
	}
	return 0;
}
