#include <stdio.h>
void swap(int *a, int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
int main()
{
int a,b;
printf("Enter the values of a \n");
scanf("%d", &a);
printf("Enter the values of b \n");
scanf("%d", &b);
swap (&a,&b);
printf("The value of a is %d and the value of b is %d after swapping\n",a,b);
return 0;
}
