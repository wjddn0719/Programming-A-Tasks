#include <stdio.h>

int main(){
    int n,a[100][100]={0};
    scanf("%d",&n);
    int x=0,y=0,d=0;
    int dx[4]={0, 1, 0, -1},dy[4]={1, 0, -1, 0};
    for(int i=1;i<=n*n;i++){
        a[x][y]=i;
        int nx=x+dx[d],ny=y+dy[d];
        if(nx<0||ny<0||nx>=n||ny>=n||a[nx][ny])d=(d+1)%4;
        x+=dx[d];
        y+=dy[d];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%3d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
