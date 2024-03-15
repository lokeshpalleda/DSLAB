#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
    struct node *pre;
};
void create_node(struct node *head,int d)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node*));
    temp->data=d;
    temp->pre=NULL;
    temp->next=NULL;
    head=temp;
}
int count(struct node *head)
{

    int c=0;
    if(head==NULL)
    {
        return 0;
    }
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        c++;
        ptr=ptr->next;

    }
    return c;
}
void display(struct node *head)
{
    if(head==NULL)
    {
        printf("there are no elements in the list:\n");
        return;
    }
    printf("\nThe elements in the list are:");
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
struct node *insertbegin(struct node *head,int d)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node *));
    temp->pre=NULL;
    temp->data=d;
    temp->next=NULL;
    if(head==NULL)
    {
        printf("list is empty");
    }
    else
    {
        temp->next=head;
        head->pre=temp;
        head=temp;
    }
    return head;
}
void insertend(struct node *head,int d)
{
    struct node *temp,*ptr;
    temp=(struct node*)malloc(sizeof(struct node*));
    temp->pre=NULL;
    temp->data=d;
    temp->next=NULL;
    ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
    temp->pre=ptr;
}
void insertpos(struct node *head,int d,int pos)
{
    struct node *pre,*ptr1;
    struct node *ptr=head;
    struct node *temp=(struct node *)malloc(sizeof(struct node *));
    temp->pre=NULL;
    temp->data=d;
    temp->next=NULL;
    pos--;
    while(pos!=0)
    {
        ptr=ptr->next;
        pos--;
    }
    if(ptr->next==NULL)
    {
        ptr->next=temp;
        temp->pre=ptr;
    }
    else
    {
        temp->pre=ptr;
        temp->next=ptr->next;
        ptr1=ptr->next;
        ptr->next=temp;
        ptr1->pre=temp;
    }
}
struct node *deletebegin(struct node *head)
{
    struct node *ptr=head;
    if(head==NULL)
    {
        printf("list is empty");
    }
    else
    {
        ptr=head;
        head=head->next;
        free(ptr);
    }
    return head;
}
void deleteend(struct node *head)
{
    struct node *pre,*ptr=head,*ptr1;
    if(head==NULL)
    {
        printf("list is empty");
    }
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr1=ptr->pre;
    ptr1->next=NULL;
    free(ptr);
}
void deletepos(struct node *head,int pos)
{
    struct node *ptr=head,*ptr1,*ptr2;
    if(head==NULL)
    {
        printf("list is empty");
    }
    pos--;
    while(pos!=0)
    {
    {
        ptr=ptr->next;
        pos--;
    }
    if(pos==1)
    {
    deletebegin(head);
    }
    else
    {
    ptr1=ptr->pre;
    ptr2=ptr->next;
    ptr1->next=ptr2;
    ptr2->pre=ptr1;
    free(ptr);
    }
    }
}
int main()
{
    struct node *head;
    int size;
    head=(struct node*)malloc(sizeof(struct node*));
    head->pre=NULL;
    head->data=20;
    head->next=NULL;
    head=insertbegin(head,10);
    display(head);
    insertend(head,40);
    display(head);
    insertpos(head,30,2);
    display(head);
    size=count(head);
    printf("\ncount=%d",size);
    head=deletebegin(head);
    display(head);
    deletepos(head,1);
    display(head);
    deleteend(head);
    display(head);
}
