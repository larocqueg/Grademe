#include <stdlib.h>

int	num_len(int n)
{
	int count = 0;
	if (n < 0)
		count++;
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int nbr)
{
	int len = num_len(nbr);
	char	*dest;
	unsigned int n;

	dest = (char *)malloc(sizeof(char) * len + 1);
	dest[len--] = '\0';
	if (nbr < 0)
	{
		dest[0] = '-';
		nbr = -nbr;
		n = nbr;
	}
	else
		n = nbr;
	if (nbr == 0)
	{
		dest[0] = '0';
		return (dest);
	}
	while (n > 0)
	{
		dest[len--] = (n % 10) + '0';
		n /= 10;
	}
	return (dest);
}
