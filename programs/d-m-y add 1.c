#include<stdio.h>

void main(){
	
	int y,m,d;
	float t;
	scanf("%d %d %d",&y,&m,&d);
	t= (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
	if(t!=0){
	if(d<29)
	{
		d++;
	}
	else{
		d=1;
		if(m<12)
			m++;
		else{
			m=1;
			y++;
		}
	}
}
else{
	if(d<30)
	{
		
		d++;
	}
	else{
		d=1;
		if(m<12)
			m++;
		else{
			m=1;
			y++;
		}
	}
}
printf("%d %d %d",y,m,d);
}
