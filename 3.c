#include <stdio.h>
#include <stdlib.h>

int main(){
    int flag = 0;
    int *p = (int*)malloc(15 * sizeof(int));
    for(int i=0; i<15; i++){
        int a;
        scanf("%d" , &a);
        if(a%2==0){
            p[flag] = a;
            flag++;
        }
    }
    p = realloc(p, flag*sizeof(int));
    for(int i=0; i<flag; i++){
        printf("%d ", p[i]);
    }
}