#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int t,i,k=0,j=0,h=0,z;
    char s[100];
    char c;
    char a[100][100];
    int b[100];
    scanf("%d",&t);
    scanf("%c",&c);
    for(int z=0; z<t;z++){
        scanf("%[^\n]s",s);
        i=0;
        while(s[i]){
            if(isalpha(s[i])){
                a[k][j++]=s[i];
            }
            if(isspace(s[i] && i>1 && isalpha(s[i-1]))){
                k++;
            }
            if(isdigit(s[i])){
                int q=0;
                while(isdigit(s[i])){
                    q=q*10+(s[i]-'0');
                    i++;
                }
                b[h++]=q;
            }
            i++;
        }
        for(i=0;i<strlen(a[i]);i++)
            printf("%s",a[i]);
        for(i=0;i<h;i++)
            printf("%d",b[i]);
    }

}