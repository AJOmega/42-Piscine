#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int	main(void)
{
	char str[] = "This is Sparta";
	char *p_str;

	p_str = str;
	ft_putstr(p_str);
	ft_putchar('\n');
}
