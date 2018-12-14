#include<stdio.h>
#include<stdlib.h>

void qprint(int seq[], int len){
	int i;
	for(i=0;i<len/10;i++){
		printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", seq[10*i], seq[10*i+1], seq[10*i+2], seq[10*i+3], seq[10*i+4], seq[10*i+5], seq[10*i+6], seq[10*i+7], seq[10*i+8], seq[10*i+9]);
	}
	for(i=len/10*10;i<len;i++){
		printf("%d\n", seq[i]);
	}
}


int check(int x){
	int *i;
	while(i<&x){
		if(*i==x){
			*i = 0;
		}
		i = i + 1;
	}
}

int main(){
	//freopen("11617_sampleIn.txt", "r", stdin);
	int i, j, k;
	int len;
	int *index;
	scanf("%d", &len);
	int seq[len];
	for(i=0;i<len;i++){
		seq[i] = i+1;
	}
	for(i=0;i<len;i++){
		printf("%d ", seq[i]);
	}
	printf("\n");
	int opa;
	scanf("%d", &opa);
	int num[opa];
	
	for(i=0;i<opa;i++){
		scanf("%d", &num[i]);	
	}
	check(num[opa-1]);
}
