#include<stdio.h>
void sum (int x[], int y[], int z[], int n);
void main()
{
int n,i,x[100],y[100],z[100];
printf("Enter the number of Elements:");
scanf("%d", &n);
printf("Enter the number of Elements for x:\n");
for(i=0; i<=n-1; i++)
{
printf("Enter a Value:");
scanf("%d", &x[i]);
}
printf("Enter the number of Elements for y:\n");
for(i=0; i<=n-1; i++)
{
printf("Enter a Value:");
scanf("%d", &y[i]);
}
printf("Enter the number of Elements for z:\n");
for(i=0; i<=n-1; i++)
{
printf("Enter a Value:");
scanf("%d", &z[i]);
}
sum(x,y,z,n);
}
void sum (int x[], int y[], int z[], int n)
{
int i,S1,S2,S3,sum=0;
for (i=0; i<=n-1; i++)
{
S1=x[i]*x[i]*y[i];
S2=x[i]*y[i]*y[i];
S3=x[i]*y[i]*z[i];
sum=sum+S1+S2+S3;
}
printf("Sum of Elements:=%d\n", sum);
}
