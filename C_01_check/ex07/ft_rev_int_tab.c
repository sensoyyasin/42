/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:23:07 by ysensoy           #+#    #+#             */
/*   Updated: 2021/10/06 16:23:08 by ysensoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	char	k;

	i = 0;
	while (i <= size - 1)
	{
		k = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = k;
		i++;
		size--;
	}
}
