/* Building steps:
 * 1. Left child thread holds parent
 * 2. Right child gets active thread from parent
 * 3. If there exists right child, the node holds
 *    right childs inorder successor node.
 * Traversing steps:
 * 1. Visit roots inorder successor
 * 2. Go by thread if thread active else right 
 *    child.
 * 3. repeat step-2 until no active thread or right
 *    child
 */     

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

struct node* getInOrderSuccessor(struct node* root){
	while (root!= NULL && root->lchild!=NULL){
		root=root->lchild;
	}
	return root;
	
}

void TBTinorder(struct node* root){
	root= getInOrderSuccessor(root);
	 while (root) {
        printf("%d ", root->data);
        if (root->p != NULL) 
			root = root->p;
        else 
			root = root->rchild;
    }
	
}


void updateThreads(struct node* root){
	root=getInOrderSuccessor(root);
	do{
		struct node* i=getInOrderSuccessor(root->rchild);
		if(i!=NULL)
			root->p=i;
		if(root->p!=NULL)
			root=root->p;
		else
			root=root->rchild;
	}while(root->p!=NULL || root->rchild!=NULL);
	
}

struct node* insert(struct node* root,int e){
	if(root == NULL)
		return newNode(e);
	else if(e<root->data){
		root->lchild=insert(root->lchild,e);
		root->lchild->p = root;
	}
	else{
		root->rchild=insert(root->rchild,e);
		root->rchild->p = root->p; //steal the parents thread
		root->p=NULL; // As stealing make that threat NULL
	}
	return root;
}

struct node* search(struct node* s,int e){
	
	if(s==NULL){
		return NULL;
	}
	else if(s->data==e){
			return s;
		}
		else if(s->data>e)
			return search(s->lchild,e);
		else{
			return search(s->rchild,e);
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
	
	s=insert(s,90);
	s=insert(s,30);	
	s=insert(s,10);
	s=insert(s,20);
	s=insert(s,40);
	s=insert(s,80);

	
	printf("\n");
	inorder(s);
	
	updateThreads(s);
	printf("\n");
	TBTinorder(s);

}
