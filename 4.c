#include <stdio.h>
#include <stdlib.h>

int len_value[11]={0,};

int len(int i,char **arr){
    int l = 0;
    for(int j=0; arr[i][j]!='\0'; j++){
        l++;
    }
    return l;
}

int main(){
    char **p = (char**)malloc(10 * sizeof(char *));
    for(int i=0; i<10; i++){
        p[i] = (char*)malloc(101);  
        scanf("%s", p[i]);
    }
    for(int i=1; i<=10; i++){
        len_value[i] = len(i-1, p);
    }
    int max = len_value[1], flag = 1;
    for(int i=1; i<=10; i++){
        if(max<len_value[i]){
            max = len_value[i];
            flag = i;
        }
    }
    printf("%s", p[flag-1]);
    return 0;
}