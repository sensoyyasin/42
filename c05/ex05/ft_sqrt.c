#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
	{
		return (0);
	}
	while (nb > i)
	{
		if (i * i == nb)
			return (i);
		else if (i >= 46341)
			return (0);
		i++;
	}
	return (0);
}
