#include<stdio.h>
int sort(int a[],int n)
{
	int temp=0,i,j;
	

	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
     printf("elements in order:");
     for(i=0;i<n;i++)
     {
        printf("%d\t",a[i]);
     }
}     
int main()
{
   int a[100],n,mid,pos=-1,key,i;
   printf("enter n:");
	scanf("%d",&n);
	printf("enter elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
   sort(a,n);
   int sta=0,end=n-1;
     printf("\nenter key:");
     scanf("%d",&key);
     while(sta<=end)
     {
        mid=(sta+end)/2;
        if(key==a[mid])
        {
           pos=mid+1;
           break;
        }
     else if(key<a[mid])
    {
     end=mid-1;
     }
     else
     {
    
     sta=mid+1;
     }
     }
     if(pos>=0)
     {
     printf("key found at %d",pos);
     }
     else
     { 
     printf("key doesn't found");
     }
}

