#include<stdio.h>
void linearsearch(int ar[],int n,int key)
{
	int i,pos=-1;
	
	printf("Enter the key element to find the index pos: \n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(ar[i]==key)
		{
			pos=i;
			break;
		}
	}
	if(pos>=0)
		printf("Element %d found at the index =%d\n",key,pos+1);
	else
		printf("Element not found");
}
int main(){
int i,ar[100],n,pos,key;
printf("enter the number of elements \n");
scanf("%d",&n);

printf("enter the elements of array\n");
for(i=0;i<n;i++)
scanf("%d",&ar[i]);
linearsearch(ar,n,key);

}