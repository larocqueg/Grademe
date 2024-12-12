#include <unistd.h>

int	main(int ac, char **av)
{
	int i = 0;
	int count = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			count = 0;
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				count = av[1][i] - 'A' + 1;
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
				count = av[1][i] - 'a' + 1;
			if (count > 0)
			{
				while (count > 0)
				{
					write(1, &av[1][i], 1);
					count--;
				}
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
		return (0);
	}
	write(1, "\n", 1);
	return (1);
}
