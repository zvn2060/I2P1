#include<stdio.h>

int main(){
	int n1, n2, n3;
	scanf("%d %d %d", &n1, &n2, &n3);
	int rec;
	if((n1+n2+n3)==(3*n2)){
		rec = 0;
	}else{
		rec = 1;
	}
	if(rec==0){
		printf("%d %d", 2*n1-n2, n2-n1+n3);
	}else{
		printf("%d %d", n1*n1/n2, n2/n1*n3);
	}
}
