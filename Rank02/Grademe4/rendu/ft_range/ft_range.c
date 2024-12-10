/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:23:32 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/12/09 16:23:33 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
