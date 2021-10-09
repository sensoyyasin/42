#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	a;

	a = 0;
	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
