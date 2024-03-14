#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
void display(struct node *head)
{
    if(head==NULL)
    {
        printf("list is empty");
        return;
    }
    printf("\nelements are=");
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
}
int count(struct node *head)
{
    int c=0,size;
    if(head==NULL)
    {
        return 0;
    }
    struct node *ptr=head;
    printf("\nelements are=");
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
        c++;
    }
}
void insertend(struct node *head,int n)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node *));
    temp->data=n;
    temp->next=NULL;
    struct node *ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
}
void insertbegin(struct node **head,int d)
{
    if(head==NULL)
    {
        printf("\nlist is empty");
        return;
    }
    struct node *tem=(struct node *)malloc(sizeof(struct node *));
    tem->data=d;
    tem->next=NULL;
    tem->next=*head;
    *head=tem;
}
void insertmid(struct node *head,int a,int pos)
{
    struct node *ptr=head;
    struct node *ptr2=(struct node *)malloc(sizeof(struct node *));
    ptr2->data=a;
    ptr2->next=NULL;
    pos--;
    while(pos!=0)
    {
        ptr=ptr->next;
        pos--;
    }
    ptr2->next=ptr->next;
    ptr->next=ptr2;
}
int main()
{
    struct node *head=NULL;
    head=(struct node *)malloc(sizeof(struct node *));
    head->data=10;
    head->next=NULL;
    struct node *current1=(struct node *)malloc(sizeof(struct node *));
    current1->data=20;
    current1->next=NULL;
    head->next=current1;
    display(head);
    count(head);
    insertend(head,30);
    display(head);
    insertbegin(&head,40);
    display(head);
    insertmid(head,50,2);
    display(head);
}