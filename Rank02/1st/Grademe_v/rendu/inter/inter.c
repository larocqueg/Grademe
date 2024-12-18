#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strchr(char c, char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int i;
	int j;
	int k = 0;
	char temp[256] = {0};
	if (ac == 3)
	{
		i = 0;
		while (av[1][i])
		{
			j = 0;
			while (av[2][j])
			{
				if (av[1][i] == av[2][j] &&
					ft_strchr(av[1][i], temp) == 0)
				{
					temp[k++] = av[1][i];
					ft_putchar(av[1][i]);
					break ;
				}
				j++;
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
