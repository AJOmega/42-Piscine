#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 127)
		{
			return 0;
		}
		i++;
	}
	return 1;
}

int	main(void)
{
	char *str;

	str = "1+~aB";
	printf("%s - %d (Expected: 1)\n", str, ft_str_is_printable(str));
	str = "Ç";
	printf("%s - %d (Expected: 0)\n", str, ft_str_is_printable(str));
	str = "";
	printf("%s - %d (Expected: 1)\n", str, ft_str_is_printable(str));
}
