#include <stdio.h>
#include <stdlib.h>
struct student{
    char name[20];
    int score;
};

int main(){
    float  sum = 0;
    int N;
    scanf("%d", &N);
    struct student *p = (struct student*)malloc(N*sizeof(struct student));
    for(int i=1; i<=N; i++){
        scanf("%s %d", p[i].name, &p[i].score);
        sum+=p[i].score;
    }   
    printf("%.2f", sum/N);
    free(p); 
}