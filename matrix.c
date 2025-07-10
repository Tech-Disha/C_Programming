#include<stdio.h>
void main()
{
int a[100][100], i,j,n;
printf("Enter the numbers of elements: ");
scanf("%d", &n);
printf("enter elements ");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("matrix of n*n order is ");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d",a[i][j]);
}
}
}
