int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				j;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			j = s1[i] - s2[i];
			break ;
		}
		else
			j = 0;
		i++;
	}
	return (j);
}
