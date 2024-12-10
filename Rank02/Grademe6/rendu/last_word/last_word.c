#include <unistd.h>

void	ft_putchar(char c);

int	main(int ac, char **av)
{
	int i = 0;
	if (ac == 2)
	{
		while (av[1][i])
			i++;
		i--;
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i--;
		while (av[1][i] != ' ' && av[1][i] != '\t')
			i--;
		i++;
		while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
			ft_putchar(av[1][i++]);
		ft_putchar('\n');
		return (0);
	}
	ft_putchar('\n');
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
