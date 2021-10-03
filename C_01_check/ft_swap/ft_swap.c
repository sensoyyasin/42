#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	a* = a;
	*b = b;
	a = b;
	b = a;
}

int main(void)
{
	ft_swap();
	return (0);
}
