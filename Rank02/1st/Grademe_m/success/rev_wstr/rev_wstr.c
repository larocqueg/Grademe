#include <unistd.h>
#include <stdlib.h>

int	count_words(const char *str, char sep);

int	main(int ac, char **av)
{
	int i = 0;
	int	j = 0;
	int count = 0;
	char result[256] = {0};
	char sep = ' ';
	if (ac == 2)
	{
		count = count_words(av[1], ' ');
		while (av[1][i])
			i++;
		i--;
		while (1)
		{
			while (av[1][i] == sep && i >= 0)
				i--;
			while (av[1][i] != sep && i >= 0)
				i--;
			j = i + 1;
			while (av[1][j] != sep && av[1][j])
			{
				write(1, &av[1][j++], 1);
			}
			if (count > 0)
			{
				count--;
				write(1, " ", 1);
			}
			if (av[1][i] == 0)
				break ;
		}
		write(1, "\n", 1);
		return (0);
	}
	write(1, "\n", 1);
	return (1);
}

int	count_words(const char *str, char sep)
{
	int	i;
	int	words;

	if (!str || !str[0])
		return (0);
	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] == sep)
			i++;
		if (str[i] != '\0' && str[i] != sep)
			words++;
		while (str[i] != sep && str[i])
			i++;
	}
	return (words - 1);
}
