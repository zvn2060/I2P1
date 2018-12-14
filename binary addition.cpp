#include<stdio.h>

int main(){
	int x, y;
	int ar1[10] = {0,0,0,0,0,0,0,0,0,0};
	int ar2[10] = {0,0,0,0,0,0,0,0,0,0};
	scanf("%d", &x);
	y = x + 1;
	int i, j; // i means power
	for(i=9;i>=0;i--){
		ar1[i] = y % 2;
		y = y / 2;
		ar2[i] = x % 2;
		x = x / 2;
	}
	int a = 0;
	for(i=0;i<10;i++){
		a = a + 1;
		if(ar1[i] == 0){
			
		}else{
			printf("%d", ar1[i]);
			break;
		}
	}
	//printf("%d", a);
	while(a<10){
		printf("%d", ar1[a]);
		a++;
	}
	int count = 0;
	for(i=0;i<10;i++){
		if(ar1[i] != ar2[i]){
			count++;
		}else{
			
		}
	}
	printf(" %d", count - 1);
}

