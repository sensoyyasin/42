unsigned int	ft_strlen(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	d;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	c = ft_strlen(dest);
	d = 0;
	while (src[d] != '\0' && c + 1 < size)
	{
		dest[c] = src[d];
		c++;
		d++;
	}
	dest[c] = '\0';
	return (ft_strlen(dest));
}

#include <string.h>
#include <stdio.h>
int main(void)
{
    char    dest[50] = "mehmet";
    char    src[50] = "opal";
    printf("%u\n",ft_strlcat(dest, src, 8));
    ft_strlcat(dest, src, 2);
    printf("%s\n", dest);
    printf("%s",src);
}

