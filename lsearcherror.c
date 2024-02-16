#include<stdio.h>
int main()
{
   int n,i,key,pos=-1,a[10];
   printf("enter n:");
   scanf("%d",&n);
   printf("enter elements:");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   printf("enter key:");
   scanf("%d",&key);
   for(i=0;i<n;i++)
   {
   if(key==a[i])
   {
      pos=i;
      break;
   }
   if(pos>=0)
   printf("key found at:%d",pos);
   else
   printf("key not found");
   }
}
