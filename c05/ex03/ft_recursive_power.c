#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	if (power < 0 || nb < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
