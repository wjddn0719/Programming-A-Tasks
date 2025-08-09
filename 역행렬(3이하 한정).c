#include <stdio.h>

int map[4][4]={0,};
int adj[4][4]={0,};
int T_map[4][4]={0,};

void adj_f(int k, int o, int xy){
    int x=1, y=1;
    int mo[3][3]={0,};
    for(int i=1; i<=xy; i++){
        y=1;
        for(int j=1; j<=xy; j++){
            if(i!=k && j!= o){
                mo[x][y++] = map[i][j];
            }
        }
        x++;
    }
    int op = -1;
    if(k+o%2==0){
        op = 1;
    }
    else op = -1;
    adj[k][o] = (mo[1][1] * mo[2][2] - mo[1][2]*mo[2][1]) * op ;
}

void T(int xy){
    for(int i=1; i<=xy; i++){
        for(int j=1; j<=xy; j++){
            T_map[i][j] = adj[j][i];
        }
    }
}



int main(){
    int xy;
    scanf("%d", &xy);
    for(int i=1; i<=xy; i++){
        for(int j=1; j<=xy; j++){
            scanf("%d", &map[i][j]);
        }
    }
    for(int i=1; i<=xy; i++){
        for(int j=1; j<=xy; j++){
            adj_f(i, j, xy);
        }
    }
    T(xy);
    for(int i=1; i<=xy; i++){
        for(int j=1; j<=xy; j++){
            printf("%d ", T_map[i][j]);
        }
        printf("\n");
    }
    return 0;
}