#include<stdio.h>
void main(){

int h,m,s;

scanf("%d %d %d",&h,&m,&s);

if(s<59)
	s++;
else
{
	s=0;
	if(m<59)
		m++;
	else
	{
		m=0;
		if(h<23)
			h++;
		else{
			h=0;
		}
	}	
}

printf("%02d:%02d:%02d",h,m,s);
}

