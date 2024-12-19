#include <unistd.h>

int	main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int count = 0;
	char dest[256] = {0};
	if (ac >= 2)
	{
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i])
			dest[j++] = av[1][i++];
		if (av[1][i] == 0)
		{
			i = 0;
			while (dest[i])
				write(1, &dest[i++], 1);
			write(1, "\n", 1);
			return (0);
		}
		while (av[1][i])
		{
			if (av[1][i] == ' ' || av[1][i] == '\t')
			{
				while(av[1][i] == ' ' || av[1][i] == '\t')
					i++;
				if (av[1][i] != 0 && count == 1)
					write(1, " ", 1);
				else if (av[1][i] == 0 && count == 0)
					break ;
				count = 1;
			}
			while (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i])
				write(1, &av[1][i++], 1);
		}
		i = 0;
		if (count == 1)
			write(1, " ", 1);
		while(dest[i])
			write(1, &dest[i++], 1);
	}
	write(1, "\n", 1);
	return (1);
}
