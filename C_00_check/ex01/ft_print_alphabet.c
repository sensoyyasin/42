#include<unistd.h>

void ft_print_alphabet(void)
{
write(1, "abcdefghijklmnopqrstuvwxyz",26);
write(1,"\n",1);
}
int main()
{
	ft_print_alphabet();
	return 0;
}
