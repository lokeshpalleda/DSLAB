#include<stdio.h>
int rev(int ar[],int n)
{
int i=0;
printf("enter n:");
scanf("%d",&n);
printf("enter elements:");
for(i=0;i<n;i++)
scanf("%d",&ar[i]);
printf("output");
for(i=n;i>=0;i--)
printf("%d\t",ar[i]);
}
int main()
{
int ar[100],n;
rev(ar,n);
}
