#include<stdio.h>

void honaito(int n){
	if(n==1){
		printf("1\n");
		return;
	}
	honaito(n-1);
	printf("%d\n", n);
	honaito(n-1);
	return;
}

int main(){
	int n;
	scanf("%d", &n);
	
	honaito(n);
	return 0;
}
