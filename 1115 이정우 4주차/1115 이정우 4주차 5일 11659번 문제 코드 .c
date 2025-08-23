#include<stdio.h>

int main(){
    int N,M;
    scanf("%d %d", &N, &M);
    int map[100001]={0};
    for(int i=1; i<=N; i++){
        int temp;
        scanf("%d", &temp);
        map[i]=map[i-1]+temp;
    }
    for(int i=1; i<=M; i++){
        int I,J;
        scanf("%d %d", &I, &J);
        printf("%d\n",map[J]-map[I-1]);
    }
    return 0;
}