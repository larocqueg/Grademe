#include <unistd.h>

int	main(int ac, char **av)
{
	int		i = 0;
	int		j = 0;
	int		count = 0;
	char	s[256] = {0};
	if (ac > 1)
	{
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i])
			s[j++] = av[1][i++];
		while (av[1][i])
		{
			if (av[1][i] == ' ' || av[1][i] == '\t')
			{
				while(av[1][i] == ' ' || av[1][i] == '\t')
					i++;
				if (av[1][i] && count > 0)
					write(1, " ", 1);
				else if (av[1][i] == 0)
					break ;
				count = 1;
			}
			if (av[1][i] == 0)
				break ;
			write(1, &av[1][i], 1);
			i++;
		}
		i = 0;
		if (count == 1)
			write(1, " ", 1);
		while(s[i])
			write(1, &s[i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
