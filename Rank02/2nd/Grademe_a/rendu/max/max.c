int	max(int *tab, unsigned int len)
{
	int i = 1;
	int temp;
	temp = tab[0];
	while (i <= len)
	{
		if (tab[i] > temp)
		{
			temp = tab[i];
		}
		i++;
	}
	return (temp);
}
