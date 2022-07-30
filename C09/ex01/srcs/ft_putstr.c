#include <unistd.h>

void	ft_putstr(cha *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}
