#include<stdio.h>
#include<stdlib.h>
#include<string.h>
# define MAX 100
int queue[MAX];
int front=-1;
int rear=-1;
int isfull()
{
    if(rear>MAX-1)
        return 1;
    else
        return 0;
}
void enqueue(int d)
{
    if(isfull())
    {
        printf("queue is overflowed");
        return;
    }
    else if(front==-1&&rear==-1)
    {
        front=rear=0;
        queue[rear]=d;
    }
    else
    {
        rear++;
        queue[rear]=d;
    }
}
int isempty()
{
    if(front==-1||front>rear)
        return 1;
    else
        return 0;
}
int dequeue()
{
    int t;
    if(isempty())
    {
        printf("stack is underflowed");
        exit(1);
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        t=queue[front];
        front++;
        return t;
    }
}
void print()
{
    int i;
    for(i=front; i<rear+1; i++)
    {
        printf("%d\n",queue[i]);
    }
}

int main()
{   int a,c,m;
    enqueue(5);
    enqueue(6);
    printf("enter what do you want\n");
    printf("1.enqueue\n");
    printf("2.dequeue\n");

    printf("3.display\n");
    printf("4.exit\n");
    printf("enter number=");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        printf("enter m");
        scanf("%d",&m);
        enqueue(m);
        print();
        break;
    case 2:
        dequeue();
        print();
        break;
    case 3:

        print();
        break;

    case 4:
        exit(1);
        break;
    default:
        printf("none of the above");
        break;
    }
}
