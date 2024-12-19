#include <unistd.h>

int	main(int ac, char **av)
{
	int i = 0;
	int j;
	if (ac == 2)
	{
		while (av[1][i])
			i++;
		i--;
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i--;
		j = i;
		if (i > 0)
		{
			while (av[1][i] != ' ' && av[1][i] != '\t'  && av[1][i])
				i--;
			i++;
			while (i <= j)
				write(1, &av[1][i++], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
