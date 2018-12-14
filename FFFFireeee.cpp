#include<stdio.h>
char map[1002][1002];
int mex, mey;
int alive = 0;
void rmap(int, int);
void survive(int, int);
void show(int, int);

int main(){
	//qfreopen("map.txt", "r", stdin);
	int x, y;
	scanf("%d", &x);
	scanf("%d", &y);
	rmap(x, y);
	//show(x, y);
	//printf("%d %d\n", mex, mey);
	int i, j;
	survive(mex, mey);
	//show(x, y);
	if(alive==1){
		printf("Alive!\n");
	}else{
		printf("Dead!\n");
	}
	return 0;
}

void show(int x, int y){
	int i, j;
	for(i=1;i<=x;i++){
		for(j=1;j<=y;j++){
			printf("%c", map[i][j]);
		}
		printf("\n");
	}
}

void rmap(int x, int y){
	int i, j;
	getchar();
	for(i=1;i<=x;i++){
		for(j=1;j<=y;j++){
			scanf("%c", &map[i][j]);
			if(map[i][j]=='e'){
				mex = i;
				mey = j;
			}
		}
		getchar();
	}
	return;
}

void survive(int x, int y){
	if((map[x][y]=='.')||(map[x][y]=='e')){
		map[x][y] = 'X';
		survive(x+1, y);
		survive(x-1, y);
		survive(x, y+1);
		survive(x, y-1);
	}else if(map[x][y]=='~'){
		alive = 1;
	}else{
		return;
	}
}
