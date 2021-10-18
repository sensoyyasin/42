#include <unistd.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 0)
		return (0);
	else if (nb <= 2)
		return (2);
	while (nb > i)
	{
		if (nb % i == 0)
		{
			nb++;
			i = 2;
		}
		i++;
	}
	return (nb);
}
