#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *next;
    int data;
}*top=NULL;
void print()
{
    struct node *temp=top;
    while(temp)
    {
    printf("%d\n",temp->data);
    temp=temp->next;
    }
}
int isempty()
{
    if(top==NULL)
    return 1;
    else
    return 0;
}
int isfull()
{
    struct node *new;
    if(new==NULL)
    return 1;
    else
    return 0;
}
void peak()
{
    struct node *temp;
    if(isempty())
    {
        printf("stack underflowed");
        exit(1);
    }
    print("%d",top->data);
}
void pop()
{
    struct node *temp=top;
    if(isempty())
    {
        printf("stack is empty");
        exit(1);
    }
    top=top->next;
    free(temp);
    temp=NULL;
}
void push(int data)
{
    struct node *new=malloc(sizeof(new));
    if(isfull())
    {
        printf("stack is empty");
        exit(1);
    }
    new->data=data;
    new->next=NULL;
    new->next=top;
    top=new;
}
int main()
{
    int data,choice,d;
    push(10);
    push(20);
    printf("1.push\n");
    printf("2.pop\n");
    printf("3.print\n");
    printf("4.peak\n");
    printf("5.exit\n");
    printf("enter the choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("enter the element:");
               scanf("%d",&d);
               push(d);
               print();
               break;
        case 2:pop();
               print();
               break;
        case 3:print();
               break;
        case 4:peak();
               break;
        case 5:exit(1);
               break;
        default:printf("wrong choice");
               break;

    }
}
