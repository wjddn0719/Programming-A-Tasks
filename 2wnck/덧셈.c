#include <stdio.h>

int main(){
    char ads[1001] = {0,};
    scanf("%s", ads);
    int sum = 0;
    for(int i=0; ads[i]!='\0'; i++){
        if(ads[i]==',')continue;
        sum+=ads[i] - '0';
    }
    printf("%d", sum);
    return 0;
}