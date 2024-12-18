#include <unistd.h>

int	ft_strchr(char c, char *str);

int	main(int ac, char **av)
{
	char temp[256] = {0};
	int i = 0;
	int j = 0;
	int	k = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			j = 0;
			while (av[2][j])
			{
				if (av[1][i] == av[2][j] && ft_strchr(av[1][i], temp) == 0)
				{
					temp[k++] = av[1][i];
					break ;
				}
				j++;
			}
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
