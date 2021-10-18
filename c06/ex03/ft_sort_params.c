#include <unistd.h>

void	ft_putstr(char *str)
{
	write (1, *str++, 1);
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < argc && i != 0)
	{
		ft_putstr(argv[i]);
		write(1, argv[i] + 48, 1);
	}
}
