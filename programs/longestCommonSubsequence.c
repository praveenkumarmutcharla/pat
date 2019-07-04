#include<stdio.h>
#include<string.h>
int max(int x,int y){
    return x>y?x:y;
}
int longestCommonSubsequence(char s[],char c[],int m,int n){
    int i,j;
    int l[m+1][n+1];
    for(i=0;i<=m;i++){
        for(j=0;j<=n;j++){
            if(i==0 || j==0){
                l[i][j]=0;
            }
            else if(s[i-1]==c[j-1]){
                l[i][j]=1+l[i-1][j-1];
            }
            else{
                l[i][j]=max(l[i-1][j],l[i][j-1]);
            }
        }
    }
    return l[m][n];        
}


int main(){
    char s[100],c[100];
    scanf("%s",s);
    scanf("%s",c);
    int m=strlen(s);
    int n=strlen(c);
    int x=longestCommonSubsequence(s,c,m,n);
    printf("%d",x);
}