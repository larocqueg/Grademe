#include <unistd.h>

void	ft_putnbr(int n);

int	main(int ac, char **av)
{
	(void)av;
	ft_putnbr(ac - 1);
	write(1, "\n", 1);
	return (0);
}

void	ft_putnbr(int n)
{
	char *base = "0123456789";

	if (n > 9)
		ft_putnbr(n / 10);
	write(1, &base[n % 10], 1);
}
