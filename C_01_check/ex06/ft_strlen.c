/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:12:59 by ysensoy           #+#    #+#             */
/*   Updated: 2021/10/05 18:31:45 by ysensoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	yineleme(int s)
{
	if (s < 0)
	{
		s = -s;
		ft_putchar('-');
		yineleme(s);
	}
	else if (s < 10)
	{
		ft_putchar(s + 48);
	}
	else
	{
		yineleme(s / 10);
		yineleme(s % 10);
	}
}

int	ft_strlen(char *str)
{
	int	p;
	int	length;

	p = 0;
	while (str[p] != '\0')
	{
		p++;
		length = p;
	}
	yineleme(length);
	return (length);
}

int	main(void)
{
	ft_strlen("yasihashjdasjhasdhsadşjnsensoyyy");
}
