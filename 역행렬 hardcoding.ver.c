#include <stdio.h>

int map[2][2]={0,};
int map_1[2][2] = {0,};
int det(){
    return map[0][0]*map[1][1] - map[0][1] * map[1][0];
}

void T(){
    map[0][0] = map_1[0][0];
    map[0][1] = map_1[1][0];
    map[1][0] = map_1[0][1];
    map[1][1] = map_1[1][1];
}

void adj(){
    map_1[0][0] =  map[1][1];
    map_1[0][1] = -map[0][1];
    map_1[1][0] = -map[1][0];
    map_1[1][1] =  map[0][0];
}

int main(){
    for(int i=0; i<2; i++){
        scanf("%d %d", &map[i][0], &map[i][1]);
    }
    int det_v = det();
    adj();
    T();
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%.3f ", (float)map[i][j]/det_v);
        }
        printf("\n");
    }
    return 0;
}