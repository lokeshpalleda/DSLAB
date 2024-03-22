#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node *next;
};
void display(struct node *tail)
{
struct node *ptr=tail->next;
printf("\nelements in the list=");
do
{
printf("%d   ",ptr->data);
ptr=ptr->next;
}
while(ptr!=tail->next);
}
struct node *create(int data)
{
struct node *temp=(struct node *)malloc(sizeof(struct node *));
temp->data=data;
temp->next=temp;
return temp;
}
void insertbegin(struct node *tail,int data)
{
struct node *temp=(struct node *)malloc(sizeof(struct node *));
temp->data=data;
temp->next=NULL;
tail->next=temp;
temp->next=tail;
}
struct node *insertend(struct node *tail,int data)
{
struct node *temp=(struct node *)malloc(sizeof(struct node *));
temp->data=data;
temp->next=NULL;
temp->next=tail->next;
tail->next=temp;
tail=temp;
return tail;
}
void insertpos(struct node *tail,int pos,int data)
{
struct node *ptr=tail->next;
struct node *temp=(struct node *)malloc(sizeof(struct node *));
temp->data=data;
temp->next=NULL;
	if(pos==1)
		{
		insertbegin(tail,data);
		}
	else
		{
			pos--;
		while(pos!=1)
		{
		ptr=ptr->next;
		pos--;
		}
		if(ptr==tail)
		{
		insertend(tail,data);
		}
		else{
		temp->next=ptr->next;
		ptr->next=temp;}

		}
		
}
int main()
{
struct node *tail;
tail=create(10);
display(tail);
printf("\ninsert at begin");
insertbegin(tail,20);
display(tail);
printf("\ninsert at end");
tail=insertend(tail,30);
display(tail);
printf("\ninsert at pos");
insertpos(tail,1,40);
display(tail);
}
