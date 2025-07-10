#include <stdio.h>
#include<conio.h>
struct std
{
int rn;
char name[15];
float marks;
};
int main()
{
int n;
printf("Enter total no. of student");
scanf("%d",&n);
struct std a[n],t;
int i,j;
for (i=0;i<n;i++)
{
printf("Enter Roll No., Name, Total Marks\n");
scanf("%d %s %f", &a[i].rn, a[i].name, &a[i].marks);
}
for(j=0;j<n;j++)
{
for(i=0;i<(n-1);i++)
{
if (a[i].marks<a[i+1].marks)
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;
}
}
}
printf("Roll No. Name\tT.Marks\n");
for (i=0;i<n;i++)
{
printf("%d\t%s\t%.2f\n",a[i].rn, a[i].name, a[i].marks);
}
return 0;
}
