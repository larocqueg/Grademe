#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*dest;
	int	range;
	int i;

	if (start > end)
	{
		range = start - end;
		dest = (int *)malloc(sizeof(int) * range);
		if (!dest)
			return (0);
		i = 0;
		while (start >= end)
			dest[i++] = start--;
		return (dest);
	}
	range = end - start;
	dest = (int *)malloc(sizeof(int) * range);
	if (!dest)
		return (0);
	i = 0;
	while (start <= end)
		dest[i++] = start++;
	return (dest);
}
