#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int i = 0;

	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				if (argv[1][i] == 90)
				{
					argv[1][i] = 65;
				}
				else
				{
					argv[1][i] += 1;
				}
			}
			else if (argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				if (argv[1][i] == 122)
				{
					argv[1][i] = 97;
				}
				else
				{
					argv[1][i] += 1;
				}
			}
			ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return 0;
}
