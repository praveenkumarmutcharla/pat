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

struct node* search_iterative(struct node* s,int e){
	
	if(s!=NULL){
		while(s!=NULL){
			if(s->data==e)
				break;
			else if(s->data > e)
				s = s->lchild;
			else
				s= s->rchild;
		}
	
		return s;
	
	}
	else
		return NULL;
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

int max(int a,int b){
	return (a>b)?a:b;
}
int height(struct node* root){ //mine
	int h=1;
	if(root==NULL)
		return -1;
	else
		return h+max(height(root->lchild),height(root->rchild));
}

int getHeight(struct node* root){ //sir's
	if(root==NULL)
		return -1;
	int x = 1+getHeight(root->lchild);
	int y= 1+getHeight(root->rchild);
	
	return max(x,y);
}

int getHeightOfSubTree(struct node* s,int e){
	s=search_iterative(s,e);
	printf("\n%d",getHeight(s));
}


int countOfNodes(struct node* root){
	if(root==NULL)
		return 0;
	else
		return 1+countOfNodes(root->rchild)+countOfNodes(root->lchild);
}
int main(){
	struct node* s=NULL;
	
	s=insert(s,50);
	s=insert(s,20);
	s=insert(s,10);
	s=insert(s,40);
	s=insert(s,90);
	s=insert(s,80); 
	s=insert(s,70); 

	printf("\n");
	inorder(s);
	
	printf("\n");
	postorder(s);
	
	printf("\n");
	preorder(s);
	
	printf("\n");
	struct node* r=search_recursive(s,20);
	if(r!=NULL)
		printf("%d",r->data);
	else
		printf("Not Found");
	printf("\n");
	struct node* r1=search_iterative(s,20);
	if(r1!=NULL)
		printf("%d",r1->data);
	else
		printf("Not Found");

	printf("\n%d",height(s));
	
	printf("\n%d",getHeight(s));
	
	getHeightOfSubTree(s,90);
	
	printf("\n%d",countOfNodes(s));
	
}



