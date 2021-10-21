/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:31:01 by ysensoy           #+#    #+#             */
/*   Updated: 2021/10/21 13:31:02 by ysensoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*p;
	int		i;
	int		i1;
	int		i2;

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
	p = (int *) malloc(sizeof(int) * i1);
	while (max > min)
	{
		p[i] = min;
		min++;
		i++;
	}
	p[i] = '\0';
	return (p);
}
