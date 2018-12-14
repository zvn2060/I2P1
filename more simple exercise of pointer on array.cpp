#include<stdio.h>


void swap(int *x, int *y){
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
	return;
}

void array_exchanger(int *x, int *y, int l){
	int i;
	for(i=0;i<l;i++){
		swap(&x[i], &y[i]);
	}
}

int main() {
    int length = 0;
    scanf("%d", &length);

    int *array_a, *array_b;

    array_a = (int*) malloc(length * sizeof(int));
    array_b = (int*) malloc(length * sizeof(int));

    for (int i = 0; i < length; i++) {
        scanf("%d", &array_a[i]);
    }

    for (int i = 0; i < length; i++) {
        scanf("%d", &array_b[i]);
    }

    array_exchanger(array_a, array_b, length);

    printf("%d", array_a[0]);
    for (int i = 1; i < length; i++) {
        printf(" %d", array_a[i]);
    }

    printf("\n");

    printf("%d", array_b[0]);
    for (int i = 1; i < length; i++) {
        printf(" %d", array_b[i]);
    }
    
}
