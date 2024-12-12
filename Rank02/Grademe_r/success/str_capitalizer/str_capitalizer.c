#include <unistd.h>

int	main(int ac, char **av)
{
	int	i = 0;
	int	j = 1;
	if (ac >= 2)
	{
		while (j < ac)
		{
			while (av[j][i])
			{
				while (av[j][i] == ' ' || av[j][i] == '\t')
					i++;
				if (av[j][i] >= 'a' && av[j][i] <= 'z')
					av[j][i] -= 32;
				i++;
				while (av[j][i] != ' ' && av[j][i] != '\t' && av[j][i] != '\0')
				{	
					if ((av[j][i] >= 'a' && av[j][i] <= 'z') &&
						(av[j][i - 1] >= '0' && av[j][i - 1] <= '9'))
						av[j][i] -= 32;
					else if (av[j][i] >= 'A' && av[j][i] <= 'Z')
						av[j][i] += 32;
					i++;
				}
				if (av[j][i] != '\0')
					i++;
			}
			i = 0;
			while (av[j][i])
				write(1, &av[j][i++], 1);
			write(1, "\n", 1);
			i = 0;
			j++;
		}
		return (0);
	}
	write(1, "\n", 1);
	return (1);
}
