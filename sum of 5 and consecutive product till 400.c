#include <stdio.h>
int main()
{
int n,sum = 0;
for(int i = 5; ((i)*(i+1))<=400; i++)
{
sum = sum+i;
}
printf("Sum of no. from 5 till the product of consecutive numbers is less than 400 = %d",sum);
}

