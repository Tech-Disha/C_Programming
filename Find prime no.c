/* Program To find prime number */
#include <stdio.h>
void main()
{
 int i, j, flag=1;
 for(i=75; i<150; i++)
 {
     int flag=1;
     for(j=2; j<i; j++)
   {
     if(i%j==0)

   {

    flag=0;
    break;
   }
   }
   if(flag==1)
   printf("%d \t",i);
   }
   }
