/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:30:56 by ysensoy           #+#    #+#             */
/*   Updated: 2021/10/21 13:30:57 by ysensoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*a;
	int	i;
	int	i1;
	int	i2;

	i = 0;
	i1 = 0;
	i2 = min;
	if (min >= max)
		return (NULL);
	while (i2 < max)
	{
		i1++;
		i2++;
	}
	a = (int *) malloc(sizeof(int) * i1);
	while (min < max)
	{
		a[i] = min;
		min++;
		i++;
	}
	a[i] = '\0';
	return (a);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == NULL)
		return (0);
	return (max - min);
}
