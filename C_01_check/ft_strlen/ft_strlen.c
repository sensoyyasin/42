#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int y;
	y = 0;
	while (str[y])
	y++;
	return (y);
}
