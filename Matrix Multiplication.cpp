#include<stdio.h>

int main(){
	
	//freopen("11142_sampleIn.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
	
	int i, j, k;
	
	int n, m, p;
	int end;
	
	while(scanf("%d%d%d", &n, &m, &p)!=EOF){
					
		int ar1[n][m], ar2[m][p];
				
		//set ar1
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				scanf("%d", &ar1[i][j]);
			}
		}
				
		//set ar2
		for(i=0;i<m;i++){
			for(j=0;j<p;j++){
				scanf("%d", &ar2[i][j]);
			}
		}
			
		long long ar3[n][p];
		
	
		
		//multipling
		for(i=0;i<n;i++){
			for(j=0;j<p;j++){
				ar3[i][j] = 0;
				for(k=0;k<m;k++){
		        	ar3[i][j] = ar3[i][j] + ar1[i][k] * ar2[k][j];
			    }
			}
		}
		
			
		for(i=0;i<n;i++){
			for(j=0;j<p;j++){
				if(j!=(p-1)){
					printf("%ld ", ar3[i][j]);
				}else{
					printf("%ld\n", ar3[i][j]);
				}
			}
		}
		printf("\n");
			
	}
}
