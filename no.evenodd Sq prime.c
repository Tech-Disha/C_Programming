#include <stdio.h>
int main()
{
int num, iVar,i,flag=1;
float fVar;
printf("Enter an Integer: ");
scanf ("%d", &num);
if (num % 2 == 0)
printf ("\n%d is even", num);
else
printf("\n%d is odd", num);

fVar=sqrt((double)num);
iVar=fVar;
if(iVar == fVar)
printf("\n%d is a perfect square",num);
else
printf("\n%d is not a perfect square",num);

for (i=2; i<=sqrt(num); i++)
{
if(num%i==0)
{
flag=0;
break;
}
}
if(num<=1)
flag=0;
if(flag==1)
{
printf("\n%d is a prime number", num);
}
else{
printf("\n%d is not a prime number", num);
}
return 0;
}


