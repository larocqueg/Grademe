#include <unistd.h>

void	tab_mult(int n);
void	ft_putnbr(int n);
int		ft_atoi(char *str);

int	main(int ac, char **av)
{
	int n;
	if (ac == 2)
	{
		n = ft_atoi(av[1]);
		if (n >= 0)
			tab_mult(n);
		return (0);
	}
	write(1, "\n", 1);
	return (1);
}

void	tab_mult(int n)
{
	char c = '1';
	int i = 1;
	while (c <= '9')
	{
		write(1, &c, 1);
		write(1, " x ", 3);
		ft_putnbr(n);
		write(1, " = ", 3);
		ft_putnbr(n * i);
		write(1, "\n", 1);
		c++;
		i++;
	}
	return ;
}

void	ft_putnbr(int n)
{
	char *base = "0123456789";

	if (n >= 10)
		ft_putnbr(n / 10);
	write(1, &base[n % 10], 1);
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
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		result = result * 10 + (str[i++] - '0');
	return (result * sign);
}
