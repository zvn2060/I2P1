#include<stdio.h>

typedef struct{
	char ch;
	unsigned int no;
}table;

int main(){
	int i;
	table alpha[26];
	for (i = 0; i < 26; i++) {
        alpha[i].ch = 'A' + i;
        alpha[i].no = 1 + i;
    }
    
    printf("%c", alpha[1].ch);
    alpha[1].no = alpha[0].no ^ alpha[1].no;
    alpha[0].no = alpha[0].no ^ alpha[1].no;
    alpha[1].no = alpha[0].no ^ alpha[1].no;
    
    printf("%c", alpha[1].ch);
}
