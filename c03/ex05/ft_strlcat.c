#include <unistd.h>
int	srclen(char *dizi)
{
	int	a;
	a = 0;
	while (dizi[a] != '\0')
	{
		a++;
	}
	return (a);
}
int	destlen(char *dest)
{
	int	i;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	return (i);
}
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d;
	unsigned int	y;
	unsigned int	len;
	i = 0;
	d = 0;
	y = 0;
	len = 0;
	d = srclen(src);
	if (size != 0)
	{
		len = destlen(dest);
		i = destlen(dest);
		while (size - 1 > len)
		{
			dest[i + y] = src[y];
			y++;
			len++;
		}
		if (size < i && size != 0)
			return (size - 1 + i);
		return (i + d);
	}
	return (d);
}
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	dest[50] = "mehmet";
	char	src[50] = "topal";
	printf("%u\n",ft_strlcat(dest, src,31));
	ft_strlcat(dest, src, 2);
	printf("%s\n", dest);
	printf("%s",src);
}
