#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i = 0;
	int n = 0;
	char *result;
	int a = 0;


	while (to_find[i] != '\0')
	{
		while (str[n] != '\0')
		{
			if (to_find[i] == str[n])
			{
				result[a] = to_find[i];
				a++;
				break;
			}
			else
			{
				result = NULL;
				a = 0;
			}
			n++;
		}
		i++;
	}
	return result;
}

int	main(void)
{
	char str[] = "World Hello";
	char to_find[] = "Hello";

	char *result = ft_strstr(str, to_find);
	printf("%s\n", result);
}
