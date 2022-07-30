#include <unistd.h>


int	main(int argc, char **argv)
{
	int a = 1;
	int b = 0;

	if (argc > 1)
	{
		while (a < argc)
		{
			while (argv[a][b] != '\0')
			{

