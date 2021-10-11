int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (s1[i] - s2[i]);
}
#include <stdio.h>

int	main(void)
{
	char	s1[] = "yasin0";
	char	s2[] = "yasin";
	printf("%d", ft_strcmp(s1,s2));
	return (0);
}

