#include <stdio.h>
void main()
{
int a=0,b=1,c,i;
printf("Fibonacci series");
for(i=3;i<=10;i++)
{
c=a+b;
printf(" %d",c);
a=b;
b=c;
}
}
