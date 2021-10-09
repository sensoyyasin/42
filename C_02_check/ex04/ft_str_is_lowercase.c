#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (97 > str[i] && str[i] > 122)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
