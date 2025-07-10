#include<stdio.h>
void main()
{
int n,r,nCr,nPr;
printf("Enter a no. n\n");
scanf("%d",&n);
printf("Enter a no. r\n");
scanf("%d",&r);
nCr=fact(n)/(fact(r)*fact(n-r));
printf("Value of nCr=%d\n", nCr);
nPr=fact(n)/(fact(n-r));
printf("Value of nPr=%d\n", nPr);
return 0;
}
int fact(int n)
{
int i, f=1;
for (i=1; i<=n; i++)
{
f=f*i;
}
return f;
}
