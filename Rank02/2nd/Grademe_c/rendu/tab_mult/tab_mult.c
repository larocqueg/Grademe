#include <unistd.h>

void	ft_putnbr(int n);
void	tab_mult(int n);
int		ft_atoi(char *str);

int	main(int ac, char **av)
{
	int n;
	if (ac == 2)
	{
		n = ft_atoi(av[1]);
		if (n >= 0)
			tab_mult(n);
	}
	write(1, "\n", 1);
	return (0);
}

void	tab_mult(int n)
{
	char num = '1';
	int	tab = 1;
	while (num <= '9')
	{
		write(1, &num, 1);
		write(1, " x ", 3);
		ft_putnbr(n);
		write(1, " = ", 3);
		ft_putnbr(n * tab);
		if (tab == 9)
			return ;
		write(1, "\n", 1);
		tab++;
		num++;
	}
}

void	ft_putnbr(int n)
{
	char *base = "0123456789";

	if (n > 9)
		ft_putnbr(n / 10);
	write(1, &base[n % 10], 1);
}

int		ft_atoi(char *str)
{
	int i  = 0;
	int n = 0;
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
		n = n * 10 + (str[i++] - '0');
	return (n * sign);
}
