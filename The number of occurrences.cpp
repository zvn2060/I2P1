#include<stdio.h>
#include<math.h>
#include<string.h>



int main(){
	char a[5], b[10];
	int lena, lenb;
	scanf("%s", a);
	int n, cnt1, big;
	scanf("%d", &n);
	int time[n];
	int i, j, k;
	for(i=0;i<n;i++){
		time[i] = 0;
		scanf("%s", b);
		lena = strlen(a);
		lenb = strlen(b);
		for(j=0;j<=lenb-lena;j++){
			cnt1 = 0;
			for(k=0;k<lena;k++){
				if(b[j+k]==a[k]){
					cnt1++;
					if(cnt1==lena){
						time[i]++;
						cnt1 = 0;
					}else{
						continue;
					}
				}
			}
		}
	}
	big = time[0];
	for(i=1;i<n;i++){
		if(big<time[i]){
			big = time[i];
		}
	}
	printf("%d", big);
} 
