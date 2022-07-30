void	ft_putchar(char c);

void	rush(int x, int y)
{
	int a = 1;
	int b = 1;

	if (x > 0 && y > 0)
	{
		while (b <= y)
		{
			while (a <= x)
			{
				if (b == 1 || b == y)
				{
					if (a == 1 || a == x)
					{
						ft_putchar('o');
					}
					else
					{
						ft_putchar('-');
					}
				}
				else
				{
					if (a == 1 || a == x)
					{
						ft_putchar('|');
					}
					else
					{
						ft_putchar(' ');
					}
				}
				a++;
			}
			a = 1;
			b++;
			ft_putchar('\n');
		}
	}
}
