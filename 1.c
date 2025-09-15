#include <stdio.h>
#include <string.h>
struct address{
    char name[20];
    char number[20];
};

int main(){
    int a,b;
    struct address s[30];
    scanf("%d", &a);
    for(int i=1; i<=a; i++){
        scanf("%s %s", s[i].name, s[i].number);
    }
    scanf("%d", &b);
    for(int i=1; i<=b; i++){
        char nama[20];
        int found = 0;
        scanf("%s", nama);
        for(int j=1; j<=a; j++){
            if(!strcmp(s[j].name,nama)){
                printf("%s\n", s[j].number);
                found = 1;
                break;
            }
        }
        if(!found)printf("Not found\n");
    }
    return 0;
}