#include<stdio.h>
#include<stdlib.h>
typedef int type;
struct node{
	struct node* lchild;
	type data;
	struct node* rchild;
};




struct node* newNode(type e){
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->lchild=temp->rchild=NULL;
	temp->data=e;
	return temp;
}

struct node* insert(struct node* root,int e){
	if(root == NULL)
		return newNode(e);
	else if(e<root->data)
		root->lchild=insert(root->lchild,e);
	else
		root->rchild=insert(root->rchild,e);
	
	return root;
}

void postorder(struct node* root){
	if(root!= NULL){
		postorder(root->lchild);
		postorder(root->rchild);
		printf("%d ",root->data);
	}
}

void preorder(struct node* root){
	if(root!= NULL){
		printf("%d ",root->data);
		preorder(root->lchild);
		preorder(root->rchild);
	}
}

void inorder(struct node* root){
	if(root!= NULL){
		inorder(root->lchild);
		printf("%d ",root->data);
		inorder(root->rchild);
	}
}

int main(){
	struct node* s=NULL;
	
	s=insert(s,50);
	s=insert(s,20);
	s=insert(s,10);
	s=insert(s,40);
	s=insert(s,90);
	s=insert(s,80);
	
	printf("\n");
	inorder(s);
	
	printf("\n");
	postorder(s);
	
	printf("\n");
	preorder(s);
	
}
