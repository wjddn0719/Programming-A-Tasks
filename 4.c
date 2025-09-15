#include <stdio.h>

struct point{
    int x;
    int y;
};

int main(){
    struct point s1;
    struct point s2;
    scanf("%d %d", &s1.x,&s1.y);
    scanf("%d %d", &s2.x, &s2.y);
    float sum = (s2.y-s1.y)*(s2.y-s1.y)+(s2.x-s1.x)*(s2.x-s1.x);
    float o = 0;
    for(int i=1; i*i<=sum; i++){
        o = i;
    }
    printf("%.2f", o);
    return 0;
}