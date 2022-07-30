#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i = 0;

	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			break;
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	unsigned int n = 3;
	char *s1;
	char s1_array[] = "Hello";
	s1 = s1_array;
	char *s2;
	char s2_array[] = "Hello";
	s2 = s2_array;
	char *s3;
	char s3_array[] = "HellO";
	s3 = s3_array;
	char *s4;
	char s4_array[] = "HeLlo";
	s4 = s4_array;

	printf("%s - %s (%d), n = %d\n", s1, s2, ft_strncmp(s1, s2, n), n);
	printf("%s - %s (%d), n = %d\n", s1, s3, ft_strncmp(s1, s3, n), n);
	printf("%s - %s (%d), n = %d\n", s1, s4, ft_strncmp(s1, s4, n), n);
	printf("%s - %s (%d), n = %d\n", s4, s1, ft_strncmp(s4, s1, n), n);
	n = 5;
	printf("%s - %s (%d), n = %d\n", s1, s3, ft_strncmp(s1, s3, n), n);
}
