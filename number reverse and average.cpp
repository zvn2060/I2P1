#include<stdio.h>

int main(){
	
	int x, y, a;
	int i, j;
	
	scanf("%d", &x);
	
	a = x;
	
	int ar1[3] = {0, 0, 0}; 
	
	ar1[0] = x/100;
	x = x - ar1[0]*100;
	ar1[1] = x/10;
	x = x - ar1[1]*10;
	ar1[2] = x;
	
	int ar2[3] = {0, 0, 0};
	for (i=0;i<=2;i++){
		j = 2 - i;
		ar2[i] = ar1[j];
	}
	
	y = ar2[0] * 100 + ar2[1] * 10 + ar2[2];
	
	printf("%.1f", (a + y) / 2.0);
}
