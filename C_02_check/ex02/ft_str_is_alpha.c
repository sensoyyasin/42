#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	while (str[i] != '\0')
	{
		if ('A' > str[i] && str[i] > 'Z' || str[i] < 'a' && str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
