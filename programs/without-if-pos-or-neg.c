#include<stdio.h>

void main(){
	int n;
	scanf("%d",&n);
	
	switch(n>0){
		case 1: printf("+ve");
				break;
		case 0: switch(n==0){
			case 1: printf("zero");
					break;
			case 0: printf("-ve");
					break;
		}
	}
}
