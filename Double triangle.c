#include <stdio.h>
void main ()
{
int i,j,m,k;
for(i=1;i<=3;i++)
{
for(j=1;j<=3-i;j++)
printf(" ");
for(m=1;m<=i;m++)
printf("%d",m);
for(k=i-1;k>=1;k--)
printf("%d",k);
printf("\n");
}
}


