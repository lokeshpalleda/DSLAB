#include<stdio.h>
#include <stdlib.h>
struct node{
	struct node *left;
	struct node *right;
	int data;
};
struct node *create(int d)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node *));
	temp->left=NULL;
	temp->data=d;
	temp->right=NULL;
	return temp;
}
struct node *insert(struct node *root,int d)
{
	if(root==NULL)
	{
		root=create(d);
	}
	else 
	{
		if(d<=root->data)
		{	
			root->left=insert(root->left,d);
		}
		else
		{
			root->right=insert(root->right,d);
		}
	}
	return root;
}
struct node *inorder(struct node *root)
{
	if(root->left!=NULL)
	inorder(root->left);
	printf("%d  ",root->data);
	if(root->right!=NULL)
	inorder(root->right);
}
struct node *preorder(struct node *root)
{
	printf("%d  ",root->data);
	if(root->left!=NULL)
	inorder(root->left);
	if(root->right!=NULL)
	inorder(root->right);
	
}
struct node *postorder(struct node *root)
{
	if(root->left!=NULL)
	inorder(root->left);
	if(root->right!=NULL)
	inorder(root->right);
	printf("%d  ",root->data);
}

int main()
{
	struct node *root=NULL;
	root=insert(root,60);
	root=insert(root,70);
	root=insert(root,80);
	root=insert(root,90);
	root=insert(root,100);
	printf("\nPREORDER  ");
	preorder(root);
	printf("\nINORDER  ");
	inorder(root);
	printf("\nPOSTORDE ");
	postorder(root);
}
			
