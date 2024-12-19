#include <stdlib.h>

int	nlen(int n)
{
	int count = 0;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	else if (n == 0)
		return (1);
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int nbr)
{
	unsigned int 		n;
	char			*dest;
	int				len;

	len = nlen(nbr);

	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	dest[len--] = '\0';
	if (nbr < 0)
	{
		dest[0] = '-';
		n = -nbr;
	}
	else if (nbr == 0)
	{
		dest[0] = '0';
		return (dest);
	}
	else
		n = nbr;
	while(n != 0)
	{
		dest[len--] = n % 10 + '0';
		n /= 10;
	}
	return (dest);
}
