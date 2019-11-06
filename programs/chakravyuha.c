void chakravyuha(int n){
    int t,b,r,l;
    int a[n][n];
    t = 0;
    r = n-1;
    b  = n-1;
    l = 0;

    int i,j,k=1;
    int dir=1;
    while(t<=b && l<=r){
        if(dir ==1){
            for(i=l;i<=r;i++){
                a[t][i]=k;
                k++;
            }
            t++;
            dir=2;
        }
        else if (dir==2)
        {
            for(i=t;i<=b;i++){
                a[i][r]=k;
                k++;
            }
            r--;
            dir=3;
        }
        else if (dir ==3)
        {
            for(i=r;i>=l;i--){
                a[b][i]=k;
                k++;
            }
            b--;
            dir=4;
        }
        else if (dir==4)
        {
            for(i=b;i>=t;i--){
                a[i][l]=k;
                k++;
            }
            l++;
            dir=1;
        }
        
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }

}
