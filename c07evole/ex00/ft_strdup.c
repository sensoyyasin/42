/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:31:22 by ysensoy           #+#    #+#             */
/*   Updated: 2021/10/21 13:31:24 by ysensoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*p;
	int		i;
	int		e;

	i = 0;
	e = 0;
	while (src[i] != '\0')
		i++;
	p = (char *) malloc(i);
	while (src[e] != '\0')
	{
		p[e] = src[e];
		e++;
	}
	p[e] = '\0';
	return (p);
}
