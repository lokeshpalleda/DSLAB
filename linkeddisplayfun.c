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
int main()
{
    struct node *head=NULL;
    head=(struct node *)malloc(sizeof(struct node *));
    head->data=10;
    head->next=NULL;
    struct node *current=(struct node *)malloc(sizeof(struct node *));
    current->data=20;
    current->next=NULL;
    head->next=current;
    display(head);
    count(head);
}