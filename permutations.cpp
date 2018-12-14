#include <stdio.h>

int list[10];

void show(int n)
{
    int i;
    printf("(%d", list[0]);
    for (i=1; i<n; i++) {
        printf(",%d", list[i]);
    }
    printf(")\n");
}

void swap(int *k, int *i)
{
	if(*k==*i){
		return;
	}
    *k = *k ^ *i;
    *i = *k ^ *i;
    *k = *k ^ *i;
}

void perm(int k, int n)
{	
	int i;
	if(k<n-1){
		for(i=k;i<n;i++){	
			swap(&list[k], &list[i]);
			perm(k+1, n);
			swap(&list[k], &list[i]);
		}
	}else{
		show(n);
		return;
	}
	
	
		
}

int main(void)
{
    int num, i;

    scanf("%d", &num);

    for(i=0; i<num; i++)
        list[i] = 1+i;
	perm(0, num);

    return 0;
}
