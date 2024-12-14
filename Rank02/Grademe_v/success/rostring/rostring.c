#include <unistd.h>

void	ft_putchar (char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int count = 0;
	char temp[256] = {0};
	if (ac >= 2)
	{
		while (av[1][i])
		{
			if (av[1][i] == ' ' || av[1][i] == '\t')
			{
				while (av[1][i] == ' ' || av[1][i] == '\t')
					i++;
				if (av[1][i] == 0)
				{

					if (temp[0])
					{
						i = 0;
						if (count > 0)
							write(1, " ", 1);
						while (temp[i])
							write(1, &temp[i++], 1);
						write(1, "\n", 1);
						return (0);
					}
				}
				else if (count > 0)
					write(1, " ", 1);
			}
			if (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i])
			{
				if (temp[0] != 0)
					count += write(1, &av[1][i++], 1);
				else
				{
					while (av[1][i] != ' ' && av[1][i] != '\t' && 
						av[1][i])
					temp[j++] = av[1][i++];
				}
			}
		}
		i = 0;
		if (count > 0)
			write(1, " ", 1);
		while (temp[i])
			write(1, &temp[i++], 1);
		write(1, "\n", 1);
		return (0);
	}
	ft_putchar('\n');
	return (0);
}
