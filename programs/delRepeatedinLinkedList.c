
#include<stdio.h>
#include<stdlib.h>
typedef int type;
struct node{
	type data;
	struct node* next;
};

struct node* newNode(type e){
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=e;
	temp->next=NULL;
	return temp;
}

void display(struct node* s){
	struct node* t=s;
		printf("\n ");
	if(t==NULL){
		printf("List is empty");
		return;
	}
	while(t!=NULL){
		printf("%d ",t->data);
		t=t->next;
	}
}

struct node* insertAtBegin(struct node* s,type e){
	struct node* t= newNode(e);
	t->next=s;
	return t;
}

struct node* searchNode(struct node* s,type e){
	struct node* head=s;
	while(s->data!=e){
		if(s->next==NULL)
			return NULL;
		else{
			s=s->next;
		}
	}
	return s;
}


void deleteAfterThis(struct node *s,int n){
	struct node* head=searchNode(s,n);
	if(head==NULL){
		return ;
	}
	else if(head->next==NULL){
		return ;
	}
	else{
		head->next=head->next->next;
		return ;
	}
}

struct node* delRepeated(struct node* root){
    if(root == NULL)
        printf("list is empty");
    if(root->next == NULL){
        return root;
    }
    else{
        struct node* t=root;
        while(t->next!=NULL){
            if(t->data == t->next->data){
                struct node* q=t->next;
                t->next=q->next;
                free(q);
            }
            t=t->next;
        }
        return root;
    }
}

struct node* getMiddleNode(struct node* root){
    struct node* p=root;
    struct node* q=root;
    while(  q->next!=NULL && q->next->next!=NULL ){
        q=q->next->next;
        p=p->next;
    }
    free(q);
    return p;
}

int main(){
	int i;
	struct node* t=NULL;
	
     t=insertAtBegin(t,6);
	t=insertAtBegin(t,5);
    t=insertAtBegin(t,4);
    t=insertAtBegin(t,4);
    t=insertAtBegin(t,3);
    t=insertAtBegin(t,2);
    t=insertAtBegin(t,1);

    t=delRepeated(t);
	display(t);

    struct node* r=NULL;
    r=getMiddleNode(t);
    printf("\n%d",r->data);


}
