#include<stdio.h>
#include<stdlib.h>

struct node {
    struct node* left;
    int data;
    struct node* right;
}*revroot,*temp1;

struct node* newNode(int e){
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->left=temp->right=NULL;
	temp->data=e;
	return temp;
}

struct node* create(){
    int x;
    scanf("%d",&x);
    if(x==-1){
        return NULL;
    }
    else{
        struct node* t=newNode(x);
        printf("give left node for %d ",x);
        t->left=create();
        printf("give right node for %d ",x);
        t->right=create();

        return t;
    }
}

struct node* createMirror(struct node* root){
    if(root==NULL){
        return NULL;
    }
    else{
        struct node* t=newNode(root->data);
        t->right=createMirror(t->left);
        t->left=createMirror(t->right);
        return t;
    }
}

void inorder(struct node* root){
    if(root!= NULL){
		inorder(root->left);
		printf("%d ",root->data);
		inorder(root->right);
	}
}

void preorder(struct node* root){
    if(root!= NULL){
        printf("%d ",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

void mirror(struct node* root){
    if(root!=NULL){
        mirror(root->left);
        mirror(root->right);
        struct node* temp=root->left;
        root->left=root->right;
        root->right=temp;
        
    }
}


int isMirror(struct node* p,struct node* p1){
    if(p==NULL && p1==NULL){
        return 1;
    }
    if(p==NULL || p1==NULL)
        return 0;
    if(p->data == p1->data){
        if(isMirror(p->left,p1->right) && isMirror(p->right,p1->left)){
            return 1;
        }
        return 0;
    }
}


int isIdentical(struct node* p,struct node* p1){
    if(p==NULL && p1==NULL){
        return 1;
    }
    if(p==NULL || p1==NULL)
        return 0;
    if(p->data == p1->data){
        if(isIdentical(p->left,p1->left) && isIdentical(p->right,p1->right)){
            return 1;
        }
        return 0;
    }
}

int isIsomorphic(struct node* p,struct node* p1){
    if(isMirror(p,p1) || isIdentical(p,p1)){
        return 1;
    }
    return 0;
}

int max(int a,int b){
	return (a>b)?a:b;
}

int getHeight(struct node* root){ 
	if(root==NULL)
		return -1;
	int x = 1+getHeight(root->left);
	int y= 1+getHeight(root->right);
	
	return max(x,y);
}

int ancestors(struct node* root,struct node* p){
    if(p!=NULL){
        
    }
}

void main(){
    struct node* root;
    root=create();
    inorder(root);
    printf("\n");
    // mirror(root);
    // inorder(root);
    // printf("\n");

    // struct node* root1;
    // root1=createMirror(root);
    // inorder(root1);
    // revroot=rev_create(root);
    // printf("\n");
    // inorder(revroot);
    printf("height %d ",getHeight(root));
}

