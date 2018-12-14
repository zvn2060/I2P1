#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b)//這函式是 qsort 所需的比較函式
{
      int c = *(int *)a;
      int d = *(int *)b;
      if(c < d) {return -1;}               //傳回 -1 代表 a < b
      else if (c == d) {return 0;}      //傳回   0 代表 a = b
      else return 1;                          //傳回  1 代表 a>b
}
	


int main(){
	int time, n;
	scanf("%d", &time);
	int i=1, j;
	while(i<=time){
		i++;
		scanf("%d", &n);
		int num[n];
		for(j=0;j<n;j++){
			scanf("%d", &num[j]);
		}
		qsort(num, n, sizeof(int), compare);
		for(j=0;j<n-1;++j){
			printf("%d ", num[j]);
		}
		printf("%d\n", num[j]);
	}
}
