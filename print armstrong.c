#include <stdio.h>
void main ()
{
int i,fd,dd,sd,d,num;
for (i=0;i<=999;i++)
{
fd=i/100;
dd=i%10;
d=i/10;
sd=d%10;
num=(pow(fd,3)+pow(sd,3)+pow(dd,3));
if(num==i)
{
printf("%d \n",num);
}
}
}
