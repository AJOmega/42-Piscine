#include <stdio.h>
#include <stdbool.h>

char	*ft_strcapitalize(char *str)
{
	int i = 0;
	bool ispace = 0;

	while (str[i] != '\0')
	{
		if(i == 0 || ispace == 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
			ispace = 0;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		else if (str[i] == 32)
		{
			ispace = 1;
		}
		i++;
	}
	return str;
}

int	main(void)
{
	char *str;
	char a_str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	str = a_str;
	printf("Before: %s\n", str);
	printf("After: %s\n", ft_strcapitalize(str));
}
