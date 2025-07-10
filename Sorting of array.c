#include<stdio.h>
int main()
{
int a[100], n,i,j,t;
printf("Enter the numbers of elements: ");
scanf("%d", &n);
for (i=0;i<n;i++)
{
printf("Enter element %d:",i+1);
scanf("%d", &a[i]);
}
for (i=0;i<n;i++)
{
for (j=0;j<n-1;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
printf("The sorted numbers is \n");
for (i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}
