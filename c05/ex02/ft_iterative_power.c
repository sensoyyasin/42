#include<unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power > i)
	{
		a *= nb;
		power--;
	}
	return (a);
}
