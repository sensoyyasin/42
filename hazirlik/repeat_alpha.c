#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	repeat;

	if (argc == 2)
	{
		i = 0;
		while(argv[1][i])
		{
			repeat = 1;
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				repeat += argv[1][i] - 'a';
			else if (argv[1][i] >= 'A'&& argv[1][i] <= 'Z')
				repeat += argv[1][i] - 'A';
			while (repeat)
			{
				write (1, &argv[1][i], 1);
				repeat--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
