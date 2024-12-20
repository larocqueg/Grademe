/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 14:51:24 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/12/09 14:51:25 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	n1;
	int	n2;
	if (ac == 3)
	{
		n1 = atoi(av[1]);
		n2 = atoi(av[2]);
		if (n1 > 0 && n2 > 0)
		{
			while (n1 != n2)
			{
				if (n1 > n2)
					n1 -= n2;
				else
					n2 -= n1;
			}
		}
		printf("%i\n", n1);
		return (0);
	}
	printf("\n");
	return (1);
}
