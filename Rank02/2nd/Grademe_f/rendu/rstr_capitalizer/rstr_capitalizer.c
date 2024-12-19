#include <unistd.h>

void	ft_putchar(char c);

int	main(int ac, char **av)
{
	int i = 0;
	int j = 1;
	if (ac >= 2)
	{
		while (j <= ac - 1)
		{
			i = 0;
			while (av[j][i])
				i++;
			i--;
			while (i >= 0)
			{
				while (av[j][i] == ' ' || av[j][i] == '\t' && i >= 0)
					i--;
				if (av[j][i] >= 'a' && av[j][i] <= 'z' && i >= 0)
					av[j][i--] -= 32;
				else if (av[j][i] >= 'A' && av[j][i] <= 'Z')
					i--;
				while (av[j][i] != ' ' && av[j][i] != '\t' && i >= 0)
				{
					if (av[j][i] >= 'A' && av[j][i] <= 'Z' &&
						av[j][i + 1] != ' ' && av[j][i + 1] != '\t')
						av[j][i] += 32;
					i--;
				}
			}
			i = 0;
			while (av[j][i])
				ft_putchar(av[j][i++]);
			write(1, "\n", 1);
			j++;
		}
		return (0);
	}
	ft_putchar('\n');
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
