#include <unistd.h>

int		ft_strchr(char c, char *str);
void	ft_putchar(char c);

int	main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	char s[256] = {0};
	if (ac == 3)
	{
		while (av[1][i])
		{
			if (ft_strchr(av[1][i], s) == 0)
				s[j++] = av[1][i];
			i++;
		}
		i = 0;
		while (av[2][i])
		{
			if (ft_strchr(av[2][i], s) == 0)
				s[j++] = av[2][i];
			i++;
		}
		i = 0;
		while (s[i])
			ft_putchar(s[i++]);
	}
	ft_putchar('\n');
	return (0);
}

int	ft_strchr(char c, char *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
