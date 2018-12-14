#include<stdio.h>
#include<string.h>
#include<math.h>
char x[1100], y[1100];
unsigned int div[1100], pld[1100];


int main(){
	//freopen("11611_sampleIn (2).txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
	
	int carry;
	int i, j=1;
	int len;
	double size;
	int time;
	scanf("%d", &time);
	unsigned long long ndi, ndib, remains;

	while(j<=time){
		j++;
		
		for(i=0;i<1100;i++){
			x[i] = 48;
			y[i] = 48;
			div[i] = 0;
			pld[i] = 0;
		}
		//get x
		scanf("%s", x);
		len = strlen(x);
		//printf("%s\n", x);
		
		//get y
		scanf("%s", y);
		//printf("%s\n", y);
		scanf("%ull", &ndi);
		len = strlen(x);
		
		//plusing
		
		carry = 0;
		for(i=0;i<len;i++){
			pld[len-i] = (((int)x[len-1-i])-48) + (((int)y[len-1-i])-48) + carry;
			carry = pld[len-i]/10;
			pld[len-i] %= 10;
		}
		pld[0] = carry;
		len++;
		
		while(pld[0]==0){
			len--;
			for(i=0;i<len;i++){
				pld[i] = pld[i+1];
			}
		}
		
		/*printf("len:%d\n", len);
		
		for(i=0;i<len;i++){
			printf("%d", pld[i]);
		}
		printf("\n");*/ 

		
		ndib = ndi;
		size = floor(log10((double)ndi)); // number of digits of divider
		
		if(ndi==1){
			for(i=0;i<len;i++){
				printf("%d", pld[i]);
			}
			printf("\n");
			continue;
		}
		
		//printf("size:%lf\n", size);
		
		if(size>(len-1)){
			printf("0\n");
			continue;
		}
		
		i=0;
		while(size==(len-1)){
			if(pld[i]>floor(ndib/pow(10.0,size-i))){
				//printf("a\n");
				break;
			}else if(pld[i]<floor(ndib/pow(10.0,size-i))){
				printf("0\n");
				//printf("b\n");
				break;
			}
			ndib %= (unsigned long long)pow(10.0,size-i);
			i++;
		}
		

		remains = 0;
		for(i=0;i<len;i++){
			div[i] = (remains * 10 + pld[i]) / ndi;
		//	printf("d:%d ", div[i]);
			remains = (remains * 10 + pld[i]) % ndi;
		//	printf("r:%d\n", remains);
		}
		
		while(div[0]==0){
			for(i=0;i<len;i++){
				div[i] = div[i+1];
			}
			len--;
		}
		

		for(i=0;i<len;i++){
			printf("%d", div[i]);
		}
		printf("\n");
	}
}
