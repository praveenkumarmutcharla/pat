#include<stdio.h>
#define MAX 1000
typedef int type;

typedef struct {
	int size;
	int top;
	type a[MAX];
}stack;

int isStackFull(const stack *s){
	if(s->top==s->size-1)
		return 1;
	else
		return 0;
}
int isStackEmpty(const stack *s){
	if(s->top==-1)
		return 1;
	else
		return 0;
}
type peek(const stack *s){
		return s->a[s->top];
}

void push(stack *s,type e){
	if(isStackFull(s)==0){
		s->a[++(s->top)]=e;
	}
	else{
		printf("\nStack is FULL");
	}
	
}
type pop(stack *s){
	if(isStackEmpty(s)==0){
		return s->a[(s->top)--];
	}
	else{
		printf("\nstack is Empty");
	}
}

int main(){
	int i,n;
	stack s={10,-1};
	for(i=1;i<=6;i++)
		push(&s,i*10);
	printf("\n top of stack is %d",peek(&s));
	for(i=1;i<=3;i++)
		printf("\npopped %d",pop(&s));
	if(isStackEmpty(&s)==0){
		printf("\ntop of stack is %d",peek(&s));
	}
	else{
		printf("\nstack is empty");
	}

}


