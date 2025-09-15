#include <stdio.h>

struct Author{
    char name[20];
    int birth; 
};

struct Book{
    char title[20];
    int price;
    struct Author author;
};

int main(){
    struct Book s1;
    struct Book s2;
    scanf("%s %d %s %d", s1.title, &s1.price, s1.author.name, &s1.author.birth);
    scanf("%s %d %s %d", s2.title, &s2.price, s2.author.name, &s2.author.birth);
    if(s1.price > s2.price){
        printf("%s %d %s %d", s2.title, s2.price, s2.author.name, s2.author.birth);
    }
    else{
        printf("%s %d %s %d", s1.title, s1.price, s1.author.name, s1.author.birth);
    }
    return 0;
}
