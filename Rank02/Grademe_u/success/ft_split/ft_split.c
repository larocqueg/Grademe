#include <stdlib.h>

int	count_words(char *str);
char *ft_strncpy(char *s1, char *s2, int n);

char	**ft_split(char *str)
{
	char **result;
	int count = count_words(str);
	int i = 0;
	int	j = 0;
	int k = 0;

	result = (char **)malloc(sizeof(char *) * (count + 1));
	if (!result)
		return (NULL);
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if (i > j)
		{
			result[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
			ft_strncpy(result[k++], &str[j], i - j);
		}
	}
	result[k] = NULL;
	return (result);
	
}

int	count_words(char *str)
{
	int i = 0;
	int word = 0;

	if (!str)
		return (-1);
	while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
				i++;
			if (!str[i])
				break ;
			word++;
		}
		while (str[i] && !(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
	}
	return (word + 1);
}

char *ft_strncpy(char *s1, char *s2, int n)
{
	int i = -1;

	while (++i < n && s2[i])
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}
