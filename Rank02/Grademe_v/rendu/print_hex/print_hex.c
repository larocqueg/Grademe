#include <unistd.h>

void	print_hex(unsigned int n)
{
	char *base = "0123456789abcdef";

	if (n >= 16)
		print_hex(n / 16);
	write(1, &base[n % 16], 1);
}

int	ft_atoi(char *str)
{
	int i = 0;
	int result = 0;
	int sign = 1;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		result = result * 10 + (str[i++] - '0');
	return (result * sign);

}

int	main(int ac, char **av)
{
	int n;

	if (ac == 2)
	{
		n = ft_atoi(av[1]);
		if (n < 0)
		{
			write(1, "\n", 1);
			return (-1);
		}
		else
			print_hex(n);
	}
	write(1, "\n", 1);
	return (0);
}
