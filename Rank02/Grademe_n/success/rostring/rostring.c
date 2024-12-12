#include <unistd.h>


int	main(int ac, char **av)
{
	int i = 0;
	int	j = 0;
	int k = 0;
	int count = 0;
	char	first[256] = {0};
	if (ac >= 2)
	{
		while (av[1][i] == ' ')
			i++;
		while (av[1][i] != ' ' && av[1][i])
			first[k++] = av[1][i++];
		first[k] = 0;
		k = i;
		while (av[1][i] == ' ')
			i++;
		j = i;
		if (av[1][i] == 0)
		{
			i = 0;
			while (first[i])
				write(1, &first[i++], 1);
			write(1, "\n", 1);
			return (0);
		}
		while (av[1][i])
		{
			if (av[1][i] == ' ')
			{
				while (av[1][i] == ' ')
					i++;
				if (av[1][i])
					write(1, " ", 1);
			}
			if (av[1][i] == 0)
				break ;
			else
				write(1, &av[1][i], 1);
			i++;
		}
		i = 0;
		if (j > k)
			write(1, " ", 1);
		while (first[i] != '\0')
			write(1, &first[i++], 1);
		write(1, "\n", 1);
		return (0);
	}
	write(1, "\n", 1);
	return (1);
}
