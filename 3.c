#include <stdio.h>

struct Data{
    int year;
    int month;
    int day;
};
struct Employee{
    char name[20];
    int numero;
    struct Data date;
};

int main(){
    struct Employee s1;
    struct Employee s2;
    struct Employee s3;
    scanf("%s %d %d %d %d", s1.name, &s1.numero, &s1.date.year, &s1.date.month, &s1.date.day);
    scanf("%s %d %d %d %d", s2.name, &s2.numero, &s2.date.year, &s2.date.month, &s2.date.day);
    scanf("%s %d %d %d %d", s3.name, &s3.numero, &s3.date.year, &s3.date.month, &s3.date.day);
    int s11, s22, s33;
    s11 = s1.date.year * 10000 + s1.date.month * 100 + s1.date.day;
    s22 = s2.date.year * 10000 + s2.date.month * 100 + s2.date.day;
    s33 = s3.date.year * 10000 + s3.date.month * 100 + s3.date.day;
    int max = (s11 < s22 ? s11 : s22) < s33 ? (s11 < s22 ? s11 : s22) : s33;
    if(max == s11) printf("%s %d %04d-%02d-%02d", s1.name, s1.numero, s1.date.year, s1.date.month, s1.date.day);
    else if(max == s22)printf("%s %d %4d-%02d-%02d", s2.name, s2.numero, s2.date.year, s2.date.month, s2.date.day);
    else printf("%s %d %04d-%02d-%02d", s3.name, s3.numero, s3.date.year, s3.date.month, s3.date.day);
    return 0;
}