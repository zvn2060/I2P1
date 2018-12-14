#include<stdio.h>
char room[23][50];
int C, F, H;
int beam;
int *ptr = &beam;
int pos;
char dire;

int max(int x, int y){
	if(x>y){
		return x;
	}else{
		return y;
	}
}

void initial();
void show();
void eject(int, int, char);

int main(){
	//freopen("shot.txt", "r", stdin);
	//freopen("view.txt", "w", stdout);
	int i, j;
	
	initial();
	//show();
	
	scanf("%d", &pos);
	getchar();
	scanf("%c", &dire);
	
	if(dire=='u'){
		dire = 0;
	}else{
		dire = 1;
	}
	
	eject(pos, 0, dire);
	show();
}

void show(){
	int i, j;
	for(i=0;i<H+2;i++){
		for(j=0;j<beam;j++){
			printf("%c", room[i][j]);
		}
		printf("\n");
	}
}

void initial(){
	int i;
	scanf("%d", &C);
	scanf("%d", &F);
	scanf("%d", &H);
	*ptr = max(C, F);
	for(i=0;i<C;i++){
		room[0][i] = '-';
	}
	for(i=0;i<F;i++){
		room[H+1][i] = '-';
	}
}

void eject(int x, int y, char dire){
	if(*ptr<y+1){
		*ptr = y + 1;
	}
	if(x==0||x==H+1){
		room[x][y] = '*';
		return;
	}
	if(room[x-1][y]=='-'&&dire==0){
		dire = dire ^ 1;
	}else if(room[x+1][y]=='-'&&dire==1){
		dire = dire ^ 1;
	}
	
	if(x==0||x==H+1){
		room[x][y] = '*';
		return;
	}
	
	room[x][y] = '*';
	
	switch (dire){ 
		case 0:
			eject(x-1, y+1, dire);
			break;
		case 1:
			eject(x+1, y+1, dire);
			break;
	} 
	return;
}

