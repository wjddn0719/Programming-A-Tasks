#include <stdio.h>
int n,m,r,c,t,a[101][101];

int main(){
    scanf("%d%d",&n,&m);
    int num=0;
    for(t=2;t<=n+m;t++)
        for(r=1;r<=n;r++){
            c=t-r;
            if(c>=1&&c<=m)a[r][c]=++num;
        }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
