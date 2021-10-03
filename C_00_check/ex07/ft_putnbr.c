#include <unistd.h>

void	ft_char(int nb)
{
	write(1, &c, 1)
}

void	ft_putnbr(int nb)
{
	int	y;
	y = 1;
	if (nb < 0 && nb / 10 == 0 )
		ft_putchar('-');
	if (nb < 0)
		y = -1;
	if (nb / 10 != 0)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) * y) + '0');
}
