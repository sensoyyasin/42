/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:13:57 by ysensoy           #+#    #+#             */
/*   Updated: 2021/10/04 20:14:22 by ysensoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int a, int b)
{
	if (a < b)
	{
		ft_putchar(a / 10 + 48);
		ft_putchar(a % 10 + 48);
		ft_putchar(' ');
		ft_putchar(b / 10 + 48);
		ft_putchar(b % 10 + 48);
		if (a != 98)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int b;

	a = 0;
	while (a <= 98)
	{
		b = 1;
		while (b <= 99)
		{
			ft_putnbr(a, b);
			b++;
		}
		a++;
	}
}
