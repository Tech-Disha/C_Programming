#include <stdio.h>
void main()
{
int num1, num2, num3;
printf("Enter 3 no.= ");
scanf("%d%d%d",&num1,&num2,&num3);
if (num1 > num2)
if (num1 > num3)
printf("%.2ld is the greatest no.", num1);
else
printf("%.2ld is the greatest no.", num3);
else
if (num2 > num3)
printf("%.2ld is the greatest no.", num2);
else
printf("%.2ld is the greatest no.", num3);
}

