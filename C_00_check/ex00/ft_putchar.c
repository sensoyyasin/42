#include<unistd.h>

void ft_putchar(char c)
{
write(1, &c, 1);
write(1,"\n", 1);
}
int main()
{
ft_putchar('c');
return 0;
}
