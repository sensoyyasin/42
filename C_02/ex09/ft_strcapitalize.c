#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (str[a] != '\0')
	{
		if (b == 0 && (str[a] >= 'a' && str[a] <= 'z'))
		{
			str[a] = str[a] - 32;
			b++;
		}
		else if (b > 0 && (str[a] >= 'A' && str[a] <= 'Z'))
		{
			str[a] = str[a] + 32;
		}
		else if ((str[a] < '0') || (str[a] > '9' && str[a] < 'A')
			|| (str[a] > 'Z' && str[a] < 'a') || (str[a] > 'z'))
			b = 0;
		else
			b++;
		a++;
	}
	return (str);
}
