#include<stdio.h>

int main (){
	char table[10] = {'0','A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'};
	int x,ch1;
	int ar1[3] = {};
	scanf("%d", &x);
	ar1[0] = x/100;
	x =  x % 100;
	ar1[1] = x/10;
	ar1[2] = x%10;
	int i;
	for(i=0;i<3;i++){
		printf("%c", table[ar1[i]]);
	}
} 
