#include<stdio.h>
#include<stdlib.h>

void fill(int l, int x, int num[], int size[], int n){
	int i, j;
	for(i=x;i<n;i++){
		num[i] = l / size[i];
		l = l % size[i];
	}
	if(l!=0){
		while((num[x]!=0)&&(l!=0)){
//			printf("%d\n", l);
			for(j=1;j<=num[x];j++){
				l = l + j * size[x];
				num[x] = num[x] - j;
				for(i=x+1;i<n;i++){
					num[i] = num[i] + l / size[i];
					l = l % size[i];
				}
			}
				
		}
	}else{
		return;
	}
}

int main(){
	int n;
	int i, j;
	scanf("%d", &n);
	int size[n];
	for(i=0;i<n;i++){
		scanf("%d", &size[i]);
	}
	int l;
	scanf("%d", &l);
	
	int num[n];
	
	fill(l, 0, num, size, n);
	
	
	printf("(");
	for(i=0;i<n-1;i++){
		printf("%d,", num[i]);
	}
	printf("%d)\n", num[n-1]);
}
