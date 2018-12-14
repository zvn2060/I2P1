#include<stdio.h>

int main(){
	int N, M, X, Y;
	scanf("%d%d%d%d", &N, &M, &X, &Y);
	
	char ar[N][M];
	
	int i, j;
	
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			ar[i][j] = '-';
		}
	}
	
	// SET '+'
	for(j=0;j<M;j++){
		ar[X][j] = '+';
	}
	
	for(i=0;i<N;i++){
		ar[i][Y] = '+';
	}
	//SET '+'
	
	//SET '*'
	for(i=0;i<N;i++){
		if(i-X+Y<M&&i-X+Y>=0){
			ar[i][i-X+Y] = '*';
		}else{
			continue;
		}	
	}
	for(i=0;i<N;i++){
		if(X+Y-i<M&&X+Y-i>=0){
			ar[i][X+Y-i] = '*';
		}else{
			continue;
		}	
	}
	//SEY '*'
	
	
	ar[X][Y] = 'S';
	
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			printf("%c", ar[i][j]);
		}
		printf("\n");
	}
} 
