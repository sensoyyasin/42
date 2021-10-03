#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	y;
	int	s;
	s = 0;
	size--;
	while (s <= size)
	{
		y = tab[i];
		tab[i] = tab[size];
		tab[size] = y;
		s++;
		size--;
	}

}
