#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char result[100] = {'\0'};
char bkp[100] = {'\0'};
int count[100] = {0};

int cmp(const void *a, const void *b)//這函式是 qsort 所需的比較函式
{
      int c = *(int *)a;
      int d = *(int *)b;
      if(c < d) {return 1;}               //傳回 -1 代表 a < b
      else if (c == d) {return 0;}      //傳回   0 代表 a = b
      else return -1;                          //傳回  1 代表 a>b
}

char *find(char *str, int x){
	char *p1;
	char *p2;
	char *i;
	int a = 0;
	i = &str[x];
	p1 = strrchr(str, str[x]);
	while(i<=p1){
	//	printf("ok");
		result[a] = *i;
		a++;
		i = i + 1;
	}
	return result;
}

void swap(char *a, char *b){
	char tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void invert(char *str){
	int i;
	int l = strlen(str);
	int b = strlen(str)/2;
	for(i=0;i<b;i++){
		swap(str+i, str+l-1-i);
	}
}

int check(char *str1, char *str2){
	strcpy(bkp, result);
	invert(bkp);
	int flag;
	flag = strcmp(bkp, result);
	if(flag==0){
		return 1;
	}else{
		return -1;
	}
}

void reset(void){
	memset(result, '\0', 100);
	memset(bkp, '\0', 100);
}	

int main(){
	//freopen("12061_sampleIn.txt", "r", stdin);
	char str[100];
	int i, k;
	int j;
	int t;
	while(scanf("%s", str)!=EOF){
		reset();
		j = 0;
		//printf("a:%s\n", str);
		for(i=0;i<strlen(str);i++){
			find(str, i);
			//printf("a:%s\n", result);
			if(check(bkp, result)==1){
				count[j] = strlen(result);
				reset();
				j++;
			}
			j++;
			reset();
		}
		qsort(count, j-1, sizeof(int), cmp);
		t = count[0];
		//printf("%d\n", t);
		for(i=0;i<strlen(str);i++){
			find(str, i);
			//printf("b:%s\n", result);
			if(check(bkp, result)==1){
				if(strlen(result)==t){
					printf("%s\n", result);
					break;	
				}	
				reset();
			}
			reset();
		}
		for(k=0;k<100;k++){
			count[k] = 0;
		}
	}
} 
