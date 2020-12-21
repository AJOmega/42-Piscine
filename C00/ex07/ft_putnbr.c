#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648 || nb == 2147483647)
	{
		if(nb < 0)
		{
			ft_putchar('-');
		}
		ft_putchar('2');
		ft_putnbr(147483647);
	}

	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
	else if (nb < 10)
	{
		ft_putchar((char)(nb + '0'));
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar((char)(nb % 10 + '0'));
	}
}	
int	main(void)
{
	ft_putnbr(2147483647);
	ft_putchar('\n');
}
