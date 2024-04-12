#include<stdio.h>
#include<stdlib.h>
#define MAX 4
int arr[MAX];
int top=-1;
void print()
{
    int i;
    if(top==-1)
    {
    printf("list is empty");
    }
    for(i=top;i>=0;i--)
    printf("%d\n",arr[i]);
}
int isfull()
{
    if(top==MAX-1)
    return 1;
    else 
    return 0;
}
int isempty()
{
    if(top==-1)
    return 1;
    else 
    return 0;
}
int peak()
{
    if(isempty())
    {
    printf("stack is underflowed");
    }
    printf("%d",arr[top]);
}
void push(int d)
{
    if(isfull())
    {
       printf("stack is full\n");
       return;
    }
    top=top+1;
    arr[top]=d;
}
int pop()
{
    int value;
    if(isempty())
    {
       printf("stack is underflowed\n");
       exit(1);
    }
    value=arr[top];
    top--;
    return value;
}
int main()
{
    int choice,data,d;
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
        case 1:printf("enter the push element:");
               scanf("%d",&d);
               push(d);
               print();
               break;
        case 2:printf("enter the pop element:");
               scanf("%d",&d);
               pop();
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
    
