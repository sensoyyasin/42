#include <unistd.h>
void ft_is_negative(int n)
{
if(n<0)
{
	n = 78;
}
else{
	n = 80;
}
write(1,&n,1);
write(1,"\n",1);
}

int main(){

ft_is_negative(n);
return 0;
}

