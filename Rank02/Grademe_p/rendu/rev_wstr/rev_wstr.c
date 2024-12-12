#include <unistd.h>

int	main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int count = 0;
	int words = 0;
	if (ac == 2)
	{
		while (av[1][i])
			i++;
		i--;
		while (i >= 0)
		{
			while (av[1][i] == ' ' || av[1][i] == '\t' && i >= 0)
				i--;
			while (av[1][i] != ' ' && av[1][i] != '\t' && i >= 0)
				i--;
			j = i + 1;
			while (av[1][j] != ' ' && av[1][j] != '\t' && av[1][j])
				write(1, &av[1][j++], 1);
			while (av[1][i] == ' ' || av[1][i] == '\t' && i >= 0)
					i--;
			if (av[1][i] != 0)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
		return (0);
	}
	write(1, "\n", 1);
	return (1);
}
