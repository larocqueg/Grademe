/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:02:48 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/12/09 13:02:50 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);

int	main(int ac, char **av)
{
	int	i = 0;
	int	j = 0;
	int k = 0;
	int	count = 0;
	char	temp[256] = {0};
	if (ac >= 2)
	{
		while (av[1][j] == ' ' ||
			(av[1][j] >= '\t' && av[1][j] <= '\r'))
			j++;
		while (av[1][j] != ' ' && !(av[1][j] >= '\t' && av[1][j] <= '\r') &&
			av[1][j] != '\0')
			temp[k++] = av[1][j++];
		temp[k] = '\n';
		temp[++k] = '\0';
		i = j;
		while (av[1][i] == ' ' || (av[1][i] >= '\t' && av[1][i] <= '\r'))
			i++;
		while (av[1][i])
		{
			if (av[1][i] == ' ' || (av[1][i] >= '\t' && av[1][i] <= '\r'))
			{
				count++;
				while (av[1][i] == ' ' ||
					(av[1][i] >= '\t' && av[1][i] <= '\r') && av[1][i] != '\0')
					i++;
				if (av[1][i] != '\0')
					ft_putchar(' ');
			}
			if (av[1][i] == 0)
				break ;
			ft_putchar(av[1][i]);
			i++;
		}
		if (count > 0)
			ft_putchar(' ');
		ft_putstr(temp);
		return (0);
	}
	ft_putchar('\n');
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}
