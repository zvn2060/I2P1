#include <stdio.h>
#include <stdint.h>


void swap(int *x, int *y){
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
	return;
}

int max(int *x, int *y){
	if(*x>*y){
		return *x;
	}else{
		return *y;
	}
}

void Transpose( int* row, int* col, int matrix[][500] ){
	int i, j;
	int a = max(row, col);
	for(i=0;i<a;i++){
		for(j=i+1;j<a;j++){
			swap(&matrix[i][j], &matrix[j][i]); 
		}
	}
	swap(row, col);
}



void Print(int m, int n, int matrix[][500] ) {
    for ( int i = 0; i < m; i++ ) {
        for ( int j = 0; j < n; j++ ) {
            printf("%d%c", matrix[i][j], " \n"[j==n-1] );
        }
    }
}

int32_t main(){
    int matrix[500][500];
    int row, col;
    scanf("%d %d", &row, &col);
    for ( int i = 0; i < row; i++ ) {
        for ( int j = 0; j < col; j++ ) {
            scanf("%d", &matrix[i][j]);
        }
    }
    Transpose( &row, &col, matrix);
    Print( row, col, matrix );
    return 0;
}

