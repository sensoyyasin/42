char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	d;

	i = 0;
	d = 0;
	while (dest[i] != '\0')
		i++;
	while (d <= nb)
	{
		dest[i + d] = src[d];
		d++;
	}
	dest[i + d] = '\0';
	return (dest);
}
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char dest[20] = "bilgisayar";
	char src[] = "programlama";

	printf("-----\ndest = %s\nsrc = %s\n", dest, src);
	ft_strncat(dest, src,3);
	printf("result = %s\n-----\n", dest);

	return (0);
}
