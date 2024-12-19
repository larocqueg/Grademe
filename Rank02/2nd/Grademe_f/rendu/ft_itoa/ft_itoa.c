#include <stdlib.h>

int	ft_numlen(int n)
{
	int count = 0;

	if (n <= 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int nbr)
{
	char	*dest;
	int		len = ft_numlen(nbr);
	unsigned int num;

	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	dest[len--] = '\0';
	if (nbr < 0)
	{
		num = -nbr;
		dest[0] = '-';
	}
	else
		num = nbr;
	if (nbr == 0)
	{
		dest[0] = '0';
		return (dest);
	}
	while (num > 0)
	{
		dest[len--] = (num % 10) + '0';
		num /= 10;
	}
	return (dest);
}
