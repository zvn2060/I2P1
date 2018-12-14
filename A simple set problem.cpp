#include<stdio.h>

int main(){
	
	int n, x, y, z;
	
	scanf("%d",&n);
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
	
	int both;
	both = (x + y) -(n - z);
	
	printf("%d %d", both, x - both);
	
	return 0;
}
 
