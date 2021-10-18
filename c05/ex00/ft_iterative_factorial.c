#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	func;

	func = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb > 0)
		func *= nb--;
	return (func);
}
