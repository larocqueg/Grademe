#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int range;
	int *res;
	int	i = 0;
	if (start > end)
	{
		range = start - end;
		res = (int *)malloc(sizeof(int) * range);
		if (!res)
			return (0);
		while (start >= end)
			res[i++] = start--;
		return (res);
	}
	range = end - start;
	res = (int *)malloc(sizeof(int) * range);
	if (!res)
		return (0);
	while (start <= end)
		res[i++] = start++;
	return (res);
}
