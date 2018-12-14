#include<stdio.h>

int search_i(int arr[5][5], int x){
	int i, j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(arr[i][j]==x){
				return i;	
			}
		}
	}
}

int search_j(int arr[5][5], int x){
	int i, j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(arr[i][j]==x){
				return j;	
			}
		}
	}
}
int obli_det_p(int arr1[], int arr2[], int x){
	int i;
	int count = 0;
	for(i=0;i<x;i++){
		if(arr1[i]+arr2[i]==4){
			count++;
		}
		if(count==5){
			return i+1;
		}
	}
	return 90;
}
int obli_det_n(int arr1[], int arr2[], int x){
	int i;
	int count = 0;
	for(i=0;i<x;i++){
		if(arr1[i]-arr2[i]==0){
			count++;
		}
		if(count==5){
			return i+1;
		}
	}
	return 90;
}


 
int count(int arr[], int x){
	int i, flag;
	int time[5] = {0, 0, 0, 0, 0};
	for(i=0;i<x;i++){
		switch(arr[i]){
			case 0:
				time[0]++;
				if(time[0]==5){
					return i+1;
				}
				break;
			case 1:
				time[1]++;
				if(time[1]==5){
					return i+1;
				}
				break;
			case 2:
				time[2]++;
				if(time[2]==5){
					return i+1;
				}
				break;
			case 3:
				time[3]++;
				if(time[3]==5){
					return i+1;
				}
				break;
			case 4:
				time[4]++;
				if(time[4]==5){
					return i+1;
				}
				break;
		}
	}
	/*for(i=0;i<5;i++){
		printf("%d", time[i]);
	}*/
	/*for(i=0;i<5;i++){
		if(time[i]<5){
			flag = 90;
		}else{
			flag = 0;
		}
	}*/
	return 90;
	
}
int min(int x, int y, int z, int w){
	int flag1, flag2;
	if(x>=y){
		flag1 = y;
	}else{
		flag1 = x;
	}
	if(z>=w){
		flag2 = w;
	}else{
		flag2 = z;
	}
	if(flag1>=flag2){
		return flag2;
	}else{
		return flag1;
	}
}

int main(){
	//freopen("11620_sampleIn.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int flag;
	int i, j, k=1;
	int pad[5][5] = {};
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d", &pad[i][j]);
		}
	}
	/*for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d ", pad[i][j]);
		}
		printf("\n");
	}*/
	/*for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d ", pad[i][j]);
		}
		printf("\n");
	}*/
	int T;
	scanf("%d", &T);
	int N, num;
	while(k<=T){
		
		scanf("%d", &N);

		int x[N], y[N];
		
		for(i=0;i<N;i++){
			scanf("%d", &num);
			x[i] = search_j(pad, num);
			y[i] = search_i(pad, num);
		}
		
		flag = 	min(count(x, N), count(y, N), obli_det_p(x, y, N), obli_det_n(x, y, N));
		if(flag!=90){
			printf("Case #%d: %d\n", k, flag);
		}else{
			printf("Case #%d: Not yet \\(^o^)/\n", k);
		}
		
		/*for(i=0;i<N;i++){
			printf("(%d , %d)\n", x[i], y[i]);
		}*/
		k++;
	}
		
}
