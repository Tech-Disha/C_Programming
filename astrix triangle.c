#include <stdio.h>
void main ()
{
int i,j,n,ch,sp,k;
printf("Enter the no.:");
scanf("%1d", &n);
printf("Enter the character: ");
scanf("%1d", &ch);
for(i=1;i<=n;i++)
{
for(j=1;j<=n-i;j++)
printf(" ");
for(k=1;k<=i;k++)
printf("%2c",ch);
printf("\n");
}
sp=1;
for(i=n-1;i>=1;i--)
{
for(j=1;j<=sp;j++)
printf(" ");
for(k=1; k<=i; k++)
printf("%2c",ch);
printf("\n");
sp++;
}
}


