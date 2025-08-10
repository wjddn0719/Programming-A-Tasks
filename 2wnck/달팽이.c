#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    int map[51][51]={0,};
    for(int i=1; i<=a; i++){
        for(int j=1; j<=a; j++){
            scanf("%d", map[i][j]);
        }
    }

    
}