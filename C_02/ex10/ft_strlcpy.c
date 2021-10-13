unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (src[a] != '\0')
		a++;
	if (size != 0)
	{
		while (src[b] != '\0' && b < size - 1)
		{
			dest[b] = src[b];
			b++;
		}
		dest[b] = '\0';
	}
	return (a);
}
#include <stdio.h>
#include <string.h>

int	main()
{
	char dizi1[] = "yasintemp";
	char dizi2[50] = "mehmet";

	ft_strlcpy(dizi1,dizi2, 5);
	printf("%s\n", dizi1);
	printf("%u\n", ft_strlcpy(dizi1,dizi2,3));
}

