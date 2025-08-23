#include <stdio.h>

int main(){
    int N, map[2001], count = 0;
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        scanf("%d", &map[i]);
    }
    for(int i=1; i<N; i++){
        for(int j = i+1; j<=N; j++){
            if(map[i]>map[j]){
                int temp = map[i];
                map[i] = map[j];
                map[j] = temp;
            }
        }
    }
    for(int i=1; i<=N; i++){
        int end_p = N, start_p = 1;
        int sum = map[i];
        while (end_p >start_p){
            if(start_p==i){
                start_p+=1;
                continue;
            }
            if(end_p==i){
                end_p-=1;
                continue;
            }
            int standard = map[end_p] + map[start_p]; 
            if(standard > sum){
                end_p-=1;
                continue;
            }
            else if(standard<sum){
                start_p+=1;
                continue;
            }
            else{
                count+=1;
                break;
            }
            break;
        }
    }
    scanf("%d\n", count);
}