#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char **argv)
{
	int i = 0;

	while (argv[1][i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int i;
	
	i = ft_strlen(argv);
	if (argc == 2)
	{
		while (i >= 0)
		{
			ft_putchar(argv[1][i]);
			i--;
		}
	}
	ft_putchar('\n');
	return 0;
}
