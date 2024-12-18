#include <unistd.h>

int	ft_strchr(char c, char *str);

int	main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char temp[256] = {0};
	if (ac == 3)
	{
		while (av[1][i])
		{
			if (ft_strchr(av[1][i], temp) == 0)
				temp[k++] = av[1][i];
			i++;
		}
		temp[k] = 0;
		i = 0;
		while (av[2][i])
		{
			if (ft_strchr(av[2][i], temp) == 0)
				temp[k++] = av[2][i];
			i++;
		}
		temp[k] = 0;
		i = 0;
		while (temp[i])
			write(1, &temp[i++], 1);
		write(1, "\n", 1);
		return (0);
	}
	write(1, "\n", 1);
	return (1);
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
