#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char *str1;
	char str1_array[] = "Hello";
	str1 = str1_array;
	char *str2;
	char str2_array[] = "Hello";
	str2 = str2_array;
	char *str3;
	char str3_array[] = "hEllo";
	str3 = str3_array;

	printf("%s - %s (%d)\n", str1, str2, ft_strcmp(str1, str2));
	printf("%s - %s (%d)\n", str1, str3, ft_strcmp(str1, str3));
	printf("%s - %s (%d)\n", str3, str1, ft_strcmp(str3, str1));
}
