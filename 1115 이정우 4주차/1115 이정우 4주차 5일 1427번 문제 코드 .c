#include <stdio.h>

int len(char a[]);

int main(){
    char a[11];
    scanf("%s", a);
    int total = len(a);
    for(int i=0; i<=total; i++){
        a[i] = a[i]-'0';
    }
    for(int i=0; i<total; i++){
        for(int j=i+1; j<=total; j++){
            if(a[i]<a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i=0; i<total; i++){
        printf("%d", a[i]);
    }
    return 0;
}
    
int len(char a[]){
    int i;
    for(i=0; a[i]!='\0'; i++){
    }
    return i;
}