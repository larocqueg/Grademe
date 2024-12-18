#include <stdlib.h>

char	*ft_strdup(char *str)
{
	int len = 0;
	while (str[len])
		len++;
	len += 1;
	char *dup = (char *)malloc(sizeof(char) * len);
	if (!dup)
		return (NULL);
	int i = 0;
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
