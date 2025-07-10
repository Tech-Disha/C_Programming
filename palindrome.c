#include<stdio.h>
#include<stdlib.h>
void main()
{
char str[100];
int i, j, count=0, n=0;
printf("Enter the string:");
scanf("%s", str);
while (str[n]!='\0')
n++;
for(i=0;i<(n-1)/2;i++)
{
if(str[n-i-1]!=str[i])
{
break;
}
else
{
count++;
}
if (count ==(((n-1)/2)))
{
printf("It is a palindrome");
}
else
{
printf("It is not a palindrome");
}
}
}
