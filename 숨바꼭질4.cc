#include <iostream> 
#include <vector> 
#include <queue>
#include <utility> 
#include <algorithm>
using namespace std; 
#define INF 1987654321 
priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> pq;
vector<pair<int,int>> node[10001];

int map[10001]={0,};
int find(int a){
	if(map[a]==a)return a;
	return map[a] = find(map[a]);
}

void my_union(int a, int b){
	int RootX = find(a);
	int RootY = find(b);
	if(RootX==RootY){
        return;
    }
	if(RootX < RootY){
		map[RootX] = RootY;
	}
	else if(RootY < RootX){
		map[RootY] = RootX;
	}
}

int main(){
	int V, E;
	scanf("%d %d", &V, &E);
	for(int i=1; i<=V; i++){
		map[i] = i;
	}
	for(int i=1; i<=E; i++){
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		if(find(a) == find(b)){
			continue;
		}
		node[a].push_back({b,c});
		node[b].push_back({a,c});
		my_union(a, b);
		
	}
}