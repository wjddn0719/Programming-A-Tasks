#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    char name[20];
    int number;
    int korean;
    int math;
    int english;
    int sum;
};

int main(){
    int N;
    scanf("%d", &N);
    struct student *p = (struct student*)malloc(N * sizeof(struct student));
    for(int i=0; i<N; i++){
        scanf("%s %d %d %d %d", p[i].name, &p[i].number, &p[i].korean, &p[i].math, &p[i].english);
        p[i].sum = p[i].korean + p[i].math + p[i].english;
    } 
    for(int i=0; i<N-1; i++){
        for(int j=i+1; j<N; j++){
            if(p[i].sum < p[j].sum || (p[i].sum == p[j].sum && strcmp(p[i].name, p[j].name) > 0)){
                struct student temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    for(int i=0; i<N; i++){
        printf("%s %d %d %d\n", p[i].name, p[i].korean, p[i].math,p[i].english);
    }
    free(p);
    return 0;
}
