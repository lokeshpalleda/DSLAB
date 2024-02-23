//selection sort
#include<stdio.h>
void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}
void read(int n,int ar[])
{
int i;
printf("enter elements:");
for(i=0;i<n;i++)
scanf("%d",&ar[i]);
}
int sort(int n,int ar[])
{
int i,j,min;
for(i=0;i<n;i++)
{
min=i;
for(j=i+1;j<n;j++)
{
if(ar[j]<ar[min])
min=j;
}
if(min!=i)
{
swap(&ar[min],&ar[i]);
}
}
}
void print(int n,int ar[])
{
int i;
for(i=0;i<n;i++)
printf("%d\t",ar[i]);
}
int main()
{
int n,i,ar[50];
printf("enter elements:");
scanf("%d",&n);
read(n,ar);
printf("elements after sorting:");
sort(n,ar);
print(n,ar);
}
