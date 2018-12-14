#include<stdio.h>
char map[1002][1002];
int n = 0;

void rmap(int, int);
void wave(int, int);
void show(int, int);

int main(){
	//freopen("pond.txt", "r", stdin);
	int x, y;
	scanf("%d", &x);
	scanf("%d", &y);
	//printf("%d %d", x, y);
	rmap(x, y);
	//show(x, y);
	int i, j;
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			if(map[i][j]=='~'){
				n++;
				wave(i, j);
			}	
		}
	}
	//show(x, y);
	printf("%d\n", n);
	
	return 0;
}

void show(int x, int y){
	int i, j;
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			printf("%c", map[i][j]);
		}
		printf("\n");
	}
}

void rmap(int x, int y){
	int i, j;
	getchar();
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			scanf("%c", &map[i][j]);
		}
		getchar();
	}
	return;
}

void wave(int x, int y){
	if(map[x][y]=='~'){
		map[x][y] = 'X';
		wave(x+1, y);
		wave(x-1, y);
		wave(x, y+1);
		wave(x, y-1);
	}else{
		return;
	}
}
