#include<stdio.h>
#include<stdlib.h>
typedef int type;

typedef int type;
struct node{
	struct node* lchild;
	type data;
	struct node* rchild;
	struct node* p;
};


struct node* newNode(type e){
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->lchild=temp->rchild=temp->p=NULL;
	temp->data=e;
	return temp;
}

struct node* insert(struct node* root,int e){
	if(root == NULL)
		return newNode(e);
	else if(e<root->data){
		root->lchild=insert(root->lchild,e);
		root->lchild->p=root;
	}
	else{
		root->rchild=insert(root->rchild,e);
		root->rchild->p=root;
	}
	return root;
}

struct node* search_recursive(struct node* s,int e){
	
	if(s==NULL){
		return NULL;
	}
	else if(s->data==e){
			return s;
		}
		else if(s->data>e)
			return search_recursive(s->lchild,e);
		else{
			return search_recursive(s->rchild,e);
		}		
	
}

void moveUp(struct node* node){
	while(node!=NULL){
		printf("%d ",node->data);
		node=node->p;
	}
}

int main(){
	struct node* s=NULL;
	
	s=insert(s,90);
	s=insert(s,30);	
	s=insert(s,10);
	s=insert(s,20);
	s=insert(s,40);
	s=insert(s,80);
	
	struct node* r=search_recursive(s,80);
	if(r!=NULL)
		printf("node - %d \nits parent - %d \n",r->data,r->p->data);
	else
		printf("Not Found \n");
		
	moveUp(r);
}
