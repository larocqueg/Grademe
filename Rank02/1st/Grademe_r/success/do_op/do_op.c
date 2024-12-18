#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		if (av[2][1] != '\0')
		{
			printf("\n");
			return (-1);
		}
		if (av[2][0] == '+')
			printf("%i", (atoi(av[1]) + atoi(av[3])));
		else if (av[2][0] == '-')
			printf("%i", (atoi(av[1]) - atoi(av[3])));
		else if (av[2][0] == '/')
			printf("%i", (atoi(av[1]) / atoi(av[3])));
		else if (av[2][0] == '*')
			printf("%i", (atoi(av[1]) * atoi(av[3])));
		else if (av[2][0] == '%')
			printf("%i", (atoi(av[1]) % atoi(av[3])));
	}
	printf("\n");
	return (0);
}
