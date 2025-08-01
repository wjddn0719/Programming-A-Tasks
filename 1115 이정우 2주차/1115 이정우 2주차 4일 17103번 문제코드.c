#include <stdio.h>

int is_alpha[10001]={0,};
int reverse[10001]={0,};
void prime(){
    int k = 1;
    for(int i = 2; i*i<=100000000; i++){
        for(int j=2; j<=100000000; j+=i){

        }
    }
}



int main(){
    for(int i=1; i<=9999; i++){
        int a = i;
        int fala[5]={0,};
        if(i>=1000){    
            int op = 1000;
            for(int i=1; i<=4; i++){
                fala[i] = a/op;
                a%=op;
                op/=10;
            }
            a = a*100000 + fala[4] * 1000 + fala[3] * 100 + fala[2] *10 + fala[1];
            reverse[i] = a; 
            
        }
        else if(i>=100){
            int op = 100;
            for(int i=1; i<=3; i++){
                fala[i] = a/op;
                a%=op;
                op/=10;
            }  
            a = a*1000 + fala[3] * 100 + fala[2] * 10 + fala[1] * 1;
            reverse[i] = a; 
        }
        else if(i>=10){
            int op = 10;
            for(int i=1; i<=2; i++){
                fala[i] = a/op;
                a%=op;
                op/=10;
            } 
            a = a*100 + fala[2] * 10 + fala[1];
            reverse[i] = a;
        }
        else{
            reverse[i] = i;
        }
    }
    prime();
}