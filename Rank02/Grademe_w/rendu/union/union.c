#include <unistd.h>

void	ft_putchar(char c);
int		ft_strchr(char c, char *str);

int	main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	char temp[256] = {0};
	if (ac == 3)
	{
		while (av[1][i])
		{
			if (ft_strchr(av[1][i], temp) == 0)
				temp[j++] = av[1][i];
			i++;
		}
		i = 0;
		while (av[2][i])
		{
			if (ft_strchr(av[2][i], temp) == 0)
				temp[j++] = av[2][i];
			i++;
		}
		i = 0;
		while (temp[i])
			ft_putchar(temp[i++]);
	}
	ft_putchar('\n');
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strchr(char c, char *str)
{
	int i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}
