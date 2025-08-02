#include <stdio.h>

#define qu_idx 10

int back = 0;
int pop = 0;
void push(int *arr){
	scanf("%d", &arr[back]);
    back = (back+1)%qu_idx;
}
void pp(int *arr){
	if(back==pop){
		printf("-1\n");
		return;
	}
	printf("%d\n", arr[pop]);
    pop = (pop+1)%qu_idx;
}
void size(){
	printf("%d\n",(back-pop+qu_idx)%qu_idx==0);
}
void empty(){
	if(back==pop){
		printf("0\n");
		return;
	}
	printf("1\n");
}
void front(int *arr){
	if(back==pop){
		printf("-1\n");
		return;
	}
	printf("%d\n", arr[pop]);
}
void back1(int *arr){
	if(back==pop){
        printf("-1\n");
    } else {
        printf("%d\n", arr[(back - 1 + qu_idx) % qu_idx]);
    }
}
int main(){
	int a,qu[qu_idx]={0,};
	char word[10];
	scanf("%d",&a);
	for(int i=1; i<=a; i++){
		scanf("%s", word);
		if(word[0] == 'p' && word[1] == 'u')push(qu);
		else if(word[0] == 'p' && word[1] == 'o')pp(qu);
		else if(word[0] == 's')size();
		else if(word[0]=='e')empty();
		else if(word[0]=='f')front(qu);
		else back1(qu);
	}
}