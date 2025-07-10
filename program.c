#include <stdio.h>
void sort(int arr[], int n)
{
int x,i,j,a;
printf("Select '1' to sort in ascending order\nSelect '2' to sort in descending order\n");
scanf("%d",&x);
if (x==1)
{
for (i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[i]>arr[j])
{
a=arr[i];
arr[i]=arr[j];
arr[j]=a;
}
}
}
}
else
{
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[i]<arr[j])
{
a=arr[i];
arr[i]=arr[j];
arr[j]=a;
}
}
}
}
printf("Elements after sorting is: \n");
for (i=0; i<n; i++)
{
printf("%d\t", arr[i]);
}
}
void search (int arr[], int n)
{
int i, num;
printf("Enter the number you want to search\n");
scanf("%d", &num);
for (i=0; i<n; i++)
{
if (arr[i]==num)
{
printf("%d is present at position %d \n", num, i+1);
break;
}
}
if (i==n)
printf("%d isn't present in the array \n", num);
}
void insert(int arr[], int n)
{
int pos, num1, i;
printf("Enter the position at which you want to add the element\n");
scanf("%d", &pos);
printf("Enter the element which you want to insert\n");
scanf("%d", &num1);
for(i=n-1; i>=pos-1; i--)
{
arr[i+1]=arr[i];
}
arr[pos-1]=num1;
printf("The array after inserting the element:\n");
for(i=0; i<=n; i++)
{
printf("%d\t", arr[i]);
}
}
void delete (int arr[], int n)
{
int i, pos1;
printf("Enter the position form which you want to delete the element\n");
scanf("%d", &pos1);
if (pos1<0 || pos1>n)
{
printf("Invalid position! Please enter position between 1 to %d", n);
}
else
{
for (i=pos1-1;i<n-1;i++)
{
arr[i]=arr[i+1];
}
printf("The array after deleting the element:\n");
for(i=0;i<n-1;i++)
{
printf("%d\t",arr[i]);
}
}
}
int main()
{
int n, arr[100],i,j,a,ch=0;
printf("Enter the number of elements \n");
scanf("%d", &n);
printf("Enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
while (ch!=5)
{
printf("\nEnter the operation you want to perform:\n1 Sort \n2 Search \n3 Insert \n4 Delete \n5 Exit \n");
scanf("%d", &ch);
switch (ch)
{
case 1:
sort(arr, n);
break;
case 2:
search(arr, n);
break;
case 3:
insert(arr, n);
break;
case 4:
delete (arr, n);
break;
case 5:
ch =5;
break;
default:
printf("Invalid Entry, Enter again \n");
}
}
return 0;
}
