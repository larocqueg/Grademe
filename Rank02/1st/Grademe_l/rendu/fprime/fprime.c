#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int i = 1;
	int number;
	if (ac == 2)
	{
		number = atoi(av[1]);
		if (number == 1)
			printf ("1");
		while (number >= ++i)
		{
			if (number % i == 0)
			{
				printf("%i", i);
				if (number != i)
				{
					printf("*");
					number /= i;
					i = 1;
				}
				else
					break;
			}
		}
		printf("\n");
		return (0);
	}
	printf("\n");
	return (1);
}
