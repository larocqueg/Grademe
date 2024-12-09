#include <unistd.h>

int		ft_atoi(char *str);
void	ft_puthex(unsigned long n);

int	main(int ac, char **av)
{
	int n;
	if (ac == 2)
	{
		n = ft_atoi(av[1]);
		if (n >= 0)
			ft_puthex((unsigned long)n);
		write(1, "\n", 1);
		return (0);
	}
	write(1, "\n", 1);
	return (1);
}

void	ft_puthex(unsigned long n)
{
	char	*base = "0123456789abcdef";

	if (n >= 16)
		ft_puthex(n / 16);
	write(1, &base[n % 16], 1);
}

int	ft_atoi(char *str)
{
	int	i = 0;
	int	sign = 1;
	int	result = 0;

	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		result = result * 10 + (str[i++] - '0');
	return (result * sign);
}
