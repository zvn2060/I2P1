#include<stdio.h>

int main(){
	
	int a, n, d;
	
	scanf("%d",&a);
	scanf("%d",&n);
	scanf("%d",&d);
	
	printf("%d ",a + (n - 1) * d);
	printf("%d",(2 * a + ((n - 1) * d)) * n / 2);
	
	return 0;
} 
