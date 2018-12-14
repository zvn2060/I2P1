#include<stdio.h>

int main(){
	int x, y;
	scanf("%d %d", &x, &y);
	int ct[y];
	
	int i;
	
	for(i=0;i<y;i++){
		ct[i] = 0;
	}
	for(i=y-1;i>=0;i--){
		ct[i] = x % 3;
		x = x / 3;
	}
	for(i=0;i<y;i++){
		printf("%d", ct[i]);
	}
	printf("\n");
}
