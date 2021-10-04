/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:13:18 by ysensoy           #+#    #+#             */
/*   Updated: 2021/10/04 20:13:38 by ysensoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_com(char a,char b,char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if(a != '7')
		write (1, ", ", 2);
}
void ft_print_comb(void)
{

	char a;
	char b;
	char c;
	

a = '0';
while (a <= '7')
{
	b = a + 1;
	while (b <= '8')
	{
		c = b + 1;
		while (c <='9')
		{
			ft_print_com(a, b, c);
			c++;
		}
   		b++;
	}
	a++;
}
}
