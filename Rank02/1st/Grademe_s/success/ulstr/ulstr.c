#include <unistd.h>

void	ft_putchar(char c);

int	main(int ac, char **av)
{
	int i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				ft_putchar(av[1][i] + 32);
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
				ft_putchar(av[1][i] - 32);
			else
				ft_putchar(av[1][i]);
			i++;
		}
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
