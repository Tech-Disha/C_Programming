#include<stdio.h>
#include<math.h>
void main()
{
int a, b, c;
float s,area;
printf("Enter sides of a triangle \n");
scanf("%d%d%d",&a,&b,&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("Semi-perimeter of triangle= %lf\nArea of Triangle= %lf",s,area);
}
