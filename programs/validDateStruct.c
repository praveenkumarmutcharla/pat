#include<stdio.h>
struct date{
	int d:6;
	int m:5;
	int y:14;
};
int isValidDate(struct date *dt){
	if(dt->d >0 and )
}

void showDate(struct date *dt){
	printf("%d %d %d",dt->d,dt->m,dt->y);
}

int main(){
	struct date d={15,6,1947};
	
	printf("%d\n",isValidDate(&d));
	
	showDate(&d);
}
