#include<stdio.h>
#define MAX 1000
typedef int type;

typedef struct {
	int size;
	int top;
	type a[MAX];
}stack;

int isFull(const stack *s){
	if(s->top==s->size-1)
		return 1;
	else
		return 0;
}
int isEmpty(const stack *s){
	if(s->top==-1)
		return 1;
	else
		return 0;
}
type peek(const stack *s){
		return s->a[s->top];
}

void push(stack *s,type e){
	if(isFull(s)==0){
		s->a[++(s->top)]=e;
	}
	else{
		printf("\nStack is FULL");
	}
	
}
type pop(stack *s){
	if(isEmpty(s)==0){
		return s->a[(s->top)--];
	}
	else{
		printf("\nstack is Empty");
	}
}


void enqueue(stack *s1,type e){
	if(isFull(s1)==0){
		s1->a[++s1->top]=e;
	}
	else{
		printf("full");
	}
	
}

void dequeue(stack *s1,stack *s2){
	while(isEmpty(s1)==0){
		push(s2,pop(s1));
	}
	printf("\ndequeued %d ",peek(s2));
	pop(s2);
	while(! isEmpty(s2)){
		push(s1,pop(s2));
	}
	
}


int main(){
	int i,n;
	stack s1={10,-1};
	stack s2={10,-1};
	
	for(i=1;i<=5;i++){
		enqueue(&s1,i*10);
	}

	
	for(i=1;i<=2;i++){
		dequeue(&s1,&s2);
	}
	
	
}
	
