#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main (int argc, char **argv)
{
	int i;
	int p = 1;
	//int equal = 0;
	bool equal = 0;

	if (argc == 4)
	{
		while (argv[p][i] != '\0')
		{
			if (argv[2][0] == argv[p][i])
			{
				argv[p][i] = argv[3][0];
				equal = 1;

			}
			ft_putchar(argv[p][i]);
			i++;
		}
	
	}
	else if (argc < 4 || equal != 1)
	{
		write(1, "\n", 1);
		exit (0);
	}

	return 0;
}
