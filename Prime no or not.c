#include<stdio.h>
#include<math.h>
int main()
{
int n,i,flag=1;
//Ask user for input
printf("Entre a number: \n");
// store input number in a variable
scanf("%d", &n);
// Iterate input to sqrt(n)
for (i=2; i<=sqrt(n); i++)
{
// If n is divisible by any number between
// 2 and 2/n, it is not prime
if(n%i==0)
{
flag=0;
break;
}
}
if(n<=1)
flag=0;
if(flag==1)
{
printf("%d is a prime number", n);
}
else{
printf("%d is not a prime number", n);
}
return 0;
}
