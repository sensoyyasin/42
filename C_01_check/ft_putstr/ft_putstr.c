#include<unistd.h>

void	ft_putchar(char *str)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	y;
	y = 0;
	while (str[y] != '\0')
	{
		ft_putchar(str[y]);
		y++;
	}
}
