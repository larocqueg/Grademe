#include <unistd.h>

void	ft_putchar(char c);

int	main(int ac, char **av)
{
	int i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			while (av[1][i] == ' ' || av[1][i] == '\t')
				i++;
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				ft_putchar(av[1][i++] + 32);
			while (av[1][i])
			{
				if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				{
					ft_putchar('_');
					ft_putchar(av[1][i] + 32);
				}
				else if (av[1][i] == ' ' || av[1][i] == '\t')
					i++;
				else
					ft_putchar(av[1][i]);
				if (av[1][i] == 0)
					break ;
				i++;
			}
		}
	}
	ft_putchar('\n');
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}