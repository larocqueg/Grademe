#include <stdlib.h>

int	ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int digit = 0;
	int sign = 1;
	int result = 0;

	if (str_base < 2 || str_base > 16 || !str)
		return (0);
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			digit = str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'f')
			digit = str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
			digit = str[i] - 'A' + 10;
		else
			break ;
		i++;
		result = result * str_base + digit;
	}
	return (result * sign);
}