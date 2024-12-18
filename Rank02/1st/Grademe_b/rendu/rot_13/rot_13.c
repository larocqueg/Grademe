/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 14:51:29 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/12/09 14:51:30 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if ((av[1][i] >= 'A' && av[1][i] <= 'M') ||
				(av[1][i] >= 'a' && av[1][i] <= 'm'))
				ft_putchar(av[1][i] + 13);
			else if ((av[1][i] > 'M' && av[1][i] <= 'Z') ||
				av[1][i] > 'm' && av[1][i] <= 'z')
				ft_putchar(av[1][i] -13);
			else
				ft_putchar(av[1][i]);
			i++;
		}
		ft_putchar('\n');
		return (0);
	}
	ft_putchar('\n');
	return (1);
}
