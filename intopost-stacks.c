#include<stdio.h>
#include<stdlib.h>
#include<string.h>
# define MAX 100
char stack[MAX];
char infix[MAX];
char postfix[MAX];
int top=-1;
int isfull()
{
    if(top==MAX-1)
        return 1;
    else
        return 0;
}
void push(char c)
{
    if(isfull())
    {
        printf("stack is overflowed");
        return;
    }
    top++;
    stack[top]=c;
}
int isempty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}
char pop()
{
    char c;
    if(isempty())
    {
        printf("stack is underflowed");
        exit(1);
    }
    c=stack[top];
    top--;
    return c;
}
void print()
{
    int i=0;
    while(postfix[i])
    {
        printf("%c",postfix[i++]);
    }
    printf("\n");
}
int precedence( char c)
{
    if(c=='+'||c=='-')
        return 1;
    else if(c=='*'||c=='/')
        return 2;
    else if(c=='^')
        return 3;
    else
        return 0;
}
void intopost()
{
    int i,j=0;
    char c,next;
    for(i=0;i<strlen(infix); i++)
    {
        c=infix[i];
        switch(c)
        {
        case '(':
            push(c);
            break;
        case ')':
            while((next=pop())!='(')
                postfix[j++]=next;
             break;   
        case '+':
        case '-':
        case '*':
        case '/':
        case '^':
            while(!isempty()&&precedence(stack[top])>=precedence(c))
                postfix[j++]=pop();
            push(c);
            break;
        default :postfix[j++]=c;
        }
    }
    while(!isempty())
        postfix[j++]=pop();
    postfix[j]='\0';
}
int main()
{
    printf("enter infix:");
    scanf("%s",infix);
    intopost();
    print();
}
    
