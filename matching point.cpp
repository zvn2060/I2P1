#include<stdio.h>
#include<string.h>

char s[20], t[20];
int count = 0;
//int set[10];
void match(char*, int);

int main(){
	//freopen("4.in", "r", stdin);
	int i = 0;
	while(scanf("%s", s)!=EOF){
		scanf("%s", t);
		//printf("%s\n%s\n", s, t);
		match(s, 0);
		printf("%d\n", count);
		count = 0;
		memset(s, '\0', sizeof(char));
		memset(t, '\0', sizeof(char));
	}
}

void match(char *s, int x){
	int i;
	if(x<strlen(t)){
		for(i=0;i<strlen(s);i++){
			//printf("s[%d] = %c, t[%d] = %c\n",i , s[i], x, t[x]);
			if(s[i]==t[x]){
				match(s+i+1, x+1);
			}
		}
	}else{
		count++;
	}
	return;
}
