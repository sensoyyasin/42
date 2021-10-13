char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	d;

	i = 0;
	d = 0;
	while (dest[i] != '\0')
		i++;
	while (d < nb)
	{
		dest[i + d] = src[d];
		d++;
	}
	dest[i + d] = '\0';
	return (dest);
}
