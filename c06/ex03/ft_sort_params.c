#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	int		i;
	int		a;
	int		k;
	char	*p;

	i = 1;
	a = 1;
	while (a < argc && argv[a] != NULL)
	{
		i = a + 1;
		while (argv[a] != NULL && argv[i] != NULL)
		{
			k = ft_strcmp(argv[a], argv[i]);
			if (k > 0)
			{
				p = argv[a];
				argv[a] = argv[i];
				argv[i] = p;
			}
			i++;
		}
		ft_putstr(argv[a]);
		a++;
	}
}
