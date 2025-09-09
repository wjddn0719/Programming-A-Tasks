#include <stdio.h>
#include <stdlib.h>

int distinct(int flag, int a, int *p){
    for(int i=0; i<flag; i++){
        if(p[i]==a)return 0;
    }
    return 1;
}

int main(){
    int n, flag = 0;
    scanf("%d", &n);
    int *p = (int*)malloc(n * sizeof(int));
    for(int i=0; i<n; i++){
        int a;
        scanf("%d", &a);
        if(distinct(flag, a, p)){
            p[flag] = a;
            flag++;
        }
    }
    p = realloc(p, flag*sizeof(int));
    for(int i=0; i<flag; i++){
        printf("%d ", p[i]);
    }
    return 0;
}