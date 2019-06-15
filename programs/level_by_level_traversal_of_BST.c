#include<stdio.h>
#include<stdlib.h>
#define MAX 1000

struct node{
	struct node* lchild;
	int data;
	struct node* rchild;
};


struct node* newNode(int e){
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
void inorder(struct node* root){
	if(root!= NULL){
		
		inorder(root->lchild);
		printf("%d ",root->data);
		inorder(root->rchild);
	}
}

typedef struct node* type;

typedef struct {
	int size;
	int front;
	int rear;
	type a[MAX];
}queue;

int isFull(const queue *q){
	if(q->rear==q->size-1)
		return 1;
	else
		return 0;
}
int isQEmpty(const queue *q){
	if(q->rear==-1 || q->front==-1)
		return 1;
	else
		return 0;
}

type atFront(const queue *q){
	if(isQEmpty(q)==0){
		return q->a[q->front];
	}
	else{
		return 0;
	}
}
void enqueue(queue *q,type e){
	if(isFull(q)==1){
		return;
	}
	else{
		if(q->rear == -1){
			q->front = q->rear=0;
		}
		else{
			(q->rear)++;
		}
		q->a[q->rear]=e;
	}
}
void dequeue(queue *q){
	if(q->front==q->rear){
		q->front = q->rear=-1;
	}
	else{
		(q->front)++;
	}
}



void traverse_level_wise(struct node* s,queue *q){
	enqueue(q,s);
	
	while(isQEmpty(q)!=1){
		
		type t= atFront(q);
		
		printf("%d ",t->data);
		
		dequeue(q);
		
		if(t->lchild!= NULL){
			enqueue(q,t->lchild);
		}
		
		if(t->rchild!= NULL){
			enqueue(q,t->rchild);
		}
		
	}
}

int main(){
	struct node* s=NULL;
	
	queue q={100,-1,-1};
	
	s=insert(s,50);
	s=insert(s,20);
	s=insert(s,10);
	s=insert(s,40);
	s=insert(s,90);
	s=insert(s,80);
	
	
	printf("\n");
	
	inorder(s);
		
	printf("\n");
	traverse_level_wise(s,&q);
}
