#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node *front=NULL;
struct node *rear=NULL;
struct node {
    int data;
    struct node *next;

};
void enqueue(int d)
{
    struct node *new=(struct node *)malloc(sizeof(struct node *));
    new->data=d;
    new->next=NULL;
    if(front==NULL&&rear==NULL)
    {
        front=rear=new;
    }
    else
    {
        rear->next=new;
        rear=new;
    }
}
int isempty()
{
    if(front==NULL||front>rear)
        return 1;
    else
        return 0;
}
void dequeue()
{
    struct node *temp;
    temp=front;
    if(isempty())
    {
        printf("queue is empty");
    }
    else
    {
        front=front->next;
        free(temp);
    }
}
void print()
{
    struct node *temp;

    temp=front;
    if(temp==NULL)
    {
        printf("queue is empty");
    }
    else

        while(temp!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
}



int main()
{   int a,c,m;
    enqueue(5);
    
    dequeue();
    print(); 


}
    
