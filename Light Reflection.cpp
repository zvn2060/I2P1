#include<stdio.h>
char room[1000][1000];
int H, W;
int posx, posy;
int finx, finy;

int max(int x, int y){
	if(x>y){
		return x;
	}else{
		return y;
	}
}

void initial();
void show();
void emit(int, int, int, int);

int main(){
	//freopen("shot.txt", "r", stdin);
	//freopen("view.txt", "w", stdout);
	int i, j, k;
	
	initial();
	//show();
	
	scanf("%d %d", &posx, &posy);
	scanf("%d", &k);
	k--;
	emit(posx-1, posy+1, 1, k);
	show();
	printf("(%d,%d)", finx, finy);
}

void show(){
	int i, j;
	for(i=0;i<H+2;i++){
		for(j=0;j<W+2;j++){
			printf("%c", room[i][j]);
		}
		printf("\n");
	}
}

void initial(){
	int i, j;
	scanf("%d", &H);
	scanf("%d", &W);
	for(i=0;i<H+2;i++){
		for(j=0;j<W+2;j++){
			room[i][j] = 0;
		}
	}
	for(i=0;i<W+2;i++){
		room[0][i] = '#';
		room[H+1][i] = '#';
	}
	for(i=0;i<H+2;i++){
		room[i][0] = '#';
		room[i][W+1] = '#';
	}
}

void emit(int x, int y, int dire, int k){

	//room[x][y] = '*';
	int ck = room[x+1][y] + room[x-1][y] + room[x][y+1] + room[x][y-1];
	if(ck==35){
		k--;
	}
	if(ck>35){
		finx = x;
		finy = y;
		return;
	}else if(k==0){
		finx = x;
		finy = y;
		return;
	}
	
	if(room[x-1][y]=='#'){
		dire = dire * 2;
	}else if(room[x+1][y]=='#'){
		dire = dire / 2;
	}else if(room[x][y+1]=='#'||room[x][y-1]=='#'){
		dire = dire * -1;
	}
	
	
	switch (dire){ 
		case 1:
			emit(x-1, y+1, dire, k);
			break;
		case -1:
			emit(x-1, y-1, dire, k);
			break;
		case 2:
			emit(x+1, y+1, dire, k);
			break;
		case -2:
			emit(x+1, y-1, dire, k);
			break;
	}
	return;
}

