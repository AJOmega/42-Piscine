#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int i = 0;
	char zxc = 'z';

	while (zxc >= 'a')
	{
		if (i % 2 == 0)
		{
			ft_putchar(zxc);
		}
		else
		{
			ft_putchar(zxc - 32);
		}
		i++;
		zxc--;
	}
	ft_putchar('\n');
}
