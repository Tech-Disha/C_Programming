#include <stdio.h>
int power(int a, int b)
{
    int i, result=1;
    for(i=1; i<=b; i++)
    {
        result=result*a;
    }
    return result;
}
int main()
{
int a,b;
printf("Enter the value of base\n");
scanf("%d",&a);
printf("Enter the value of power \n");
scanf("%d",&b);
printf("The value of  a raised to be is: %d",power(a,b));
return 0;
}
