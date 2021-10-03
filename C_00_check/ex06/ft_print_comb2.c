#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	y;
	int	s;
	
	y = -1;
	while (++y <= 98)
	{
		s = y;
		while(++s <= 99)
		{
			ft_putchar((char)(y / 10) + '0');
			ft_puthcar((char)(y % 10) + '0');
			ft_putchar(' ');
			ft_putchar((char)(s / 10) + '0');
			ft_putchar((char)(s % 10) + '0');
			if ((y != 98))
			{
				write(1, ", ", 2);
			}
		}
	}
}
