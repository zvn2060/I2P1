#include<stdio.h>

unsigned long long nCr(int x, int y){				//n!
	unsigned long long ans = 1;
	int j;
	if(x>y){
		for(j=x+y;j>x;j--){
			ans = ans * j;
		}
		for(j=y;j>0;j--){
			ans = ans/j;
		}		
	}else{
		for(j=x+y;j>y;j--){
			ans = ans * j;
		}
		for(j=x;j>0;j--){
			ans = ans/j;
		}
	}
	return ans;
}



int main(){
	
	int j;	
	int N, n;
	int i = 1;
	scanf("%d", &N);
	while(i<=N){
		i++;
		unsigned int num = 0;
		scanf("%d", &n);
		for(j=n/2;j>=0;j--){
		num = num + nCr(j, n-2*j);
		}
		printf("%u\n", num);
	}
}
