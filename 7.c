#include <stdio.h>

struct student{
    int number;
    char gender[20];
    char name[20];
    int korean;
    int math;
    int sum;
};

int main(){
    struct student s1;
    struct student s2;
    struct student s3;
    scanf("%d %s %s %d %d", &s1.number, s1.gender, s1.name, &s1.korean, &s1.math);
    s1.sum = s1.korean + s1.math;
    scanf("%d %s %s %d %d", &s2.number, s2.gender, s2.name, &s2.korean, &s2.math);
    s2.sum = s2.korean + s2.math;
    scanf("%d %s %s %d %d", &s3.number, s3.gender, s3.name, &s3.korean, &s3.math);
    s3.sum = s3.korean + s3.math;
    int max = (s1.sum > s2.sum ? s1.sum : s2.sum) > s3.sum ? (s1.sum > s2.sum ? s1.sum : s2.sum) :s3.sum;
    if(max==s1.sum){
        printf("%d %s %s %d %d", s1.number, s1.gender, s1.name, s1.korean, s1.math);
    }
    else if(max==s2.sum){
        printf("%d %s %s %d %d", s2.number, s2.gender, s2.name, s2.korean, s2.math);
    }
    else{
        printf("%d %s %s %d %d", s3.number, s3.gender, s3.name, s3.korean, s3.math);
    }
    return 0;
}