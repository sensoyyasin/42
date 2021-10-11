int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	int	j;

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
#include <stdio.h>

int	main(void)
{
	char	s1[] = "yasin100";
	char	s2[] = "yasin";
	printf("%d",ft_strncmp(s1,s2,6));
	return (0);
}

