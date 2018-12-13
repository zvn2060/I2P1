#include<stdio.h>
#include<string.h>

int main(){
	char str[1001];
	char cache;
	int i, j;
	for(i=0;i<1001;i++){
		str[i] = 0;
	}
	scanf("%s", str);
	int len;
	len = strlen(str);
	for(j=1;j<=len;j++){
		cache = str[0];
		for(i=0;i<len;i++){
			str[i] = str[i+1];
		}
		str[len-1] = cache;
		str[len] = '\0';
		printf("%s\n", str);
	}
}
