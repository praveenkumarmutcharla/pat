#include <stdio.h>
#include <time.h>
#include <stdlib.h>
typedef 
  struct {
      char s;
      int v;
  } card;
void showCard(card c) {
    switch(c.v) {
        case 1:
            printf("%cA ",c.s); break;
        case 11:
            printf("%cJ ",c.s); break;
        case 12:
            printf("%cQ ",c.s); break;
        case 13:
            printf("%cK ",c.s); break;
        default:
            printf("%c%d ", c.s, c.v); 
            break;
    }
}
void shuffleCards(card a[]);
int getRandom(int n) {
    //Returns a random number from 0 to n-1.
    static int flag = 1;
    if (flag) {
        srand(time(NULL));
        flag = 0;
    }
    return rand() % n;
}

int main() {
    card a[52] = {
        's',1,'s',2,'s',3,'s',4,'s',5,'s',6,'s',7,'s',8,'s',9,'s',10,'s',11,'s',12,'s',13,
        'd',1,'d',2,'d',3,'d',4,'d',5,'d',6,'d',7,'d',8,'d',9,'d',10,'d',11,'d',12,'d',13,
        'h',1,'h',2,'h',3,'h',4,'h',5,'h',6,'h',7,'h',8,'h',9,'h',10,'h',11,'h',12,'h',13,
        'c',1,'c',2,'c',3,'c',4,'c',5,'c',6,'c',7,'c',8,'c',9,'c',10,'c',11,'c',12,'c',13 };

    for (int i = 0; i < 52; i++) 
        showCard(a[i]);
    printf("\n");
    shuffleCards(a);
    for (int i = 0; i < 52; i++) 
        showCard(a[i]);
    printf("\n");
}
void shuffleCards(card a[]) {
	card t;
	for(int i=0;i<52;i++){
		for(int j=i+1;j<52;j++){
			int m=getRandom(52);
			int n=getRandom(52);
			t=a[m];
			a[m]=a[n];
			a[n]=t;
		}
	}
}

