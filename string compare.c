#include<stdio.h>
#include<stdlib.h>
int main ()
{
char a[100],b[100],i=0,len1=0,len2=0,x;
printf("Enter first string:\n");
gets(a);
while(a[len1]!='\0')
{
len1++;
}
printf("Enter second string:\n");
gets(b);
while(a[len2]!='\0')
{
len2++;
}
if (len1==len2)
{
for(i=0; i<len1-1; i++)
{
if (a[i]!=b[i])
{
break;
}
}
if(i==len1)
{
printf("The string are equal");
}
else
{
printf("The string are not equal");
for (i=0; i<len1-1; i++)
{
if (a[i]==b[i])
{
continue;
}
else
{
if(a[i]>b[i])
{
printf("\n%s String is greater",a);
break;
}
else
{
printf("\n%s String is greater",b);
break;
}
}
}
}
}
else
{
x=(len1<len2)?len1:len2;
for(i=0; i<=x-1; i++)
{
if(a[i]==b[i])
{
continue;
}
else
{
if (a[i]>b[i])
{
printf("\n%s string is greater",a);
break;
}
else
{
printf("\n%s string is greater",b);
break;
}
}
}
if(len1>len2&&i==1)
printf("%s string is greater",a);
else if(len2>len1&&i==1)
printf("%s string is greater",b);
}
return 0;
}
