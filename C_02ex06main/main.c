int	main()
{
	int	a;
	a = ft_str_is_printable("5613984\n");
	if (a  == 0)
	{
		write(1, "a", 1);
	}
	if (a == 1)
	{
		write(1, "b", 1);
	}
	return (0);
}
