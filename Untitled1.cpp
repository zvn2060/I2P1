#include<stdio.h>

int main(){
	int seq[200000];
	int i;
	for(i=0;i<200000;i++){
		seq[i] = i+1;
	}
	/*for(i=0;i<20000;i++){
		printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", seq[10*i], seq[10*i+1], seq[10*i+2], seq[10*i+3], seq[10*i+4], seq[10*i+5], seq[10*i+6], seq[10*i+7], seq[10*i+8], seq[10*i+9]);
	}*/
	for(i=0;i<200000;i++){
		printf("%d\n", seq[i]);
	}
	/*for(i=0;i<10000;i++){
		printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", seq[20*i], seq[20*i+1], seq[20*i+2], seq[20*i+3], seq[20*i+4], seq[20*i+5], seq[20*i+6], seq[20*i+7], seq[20*i+8], seq[20*i+9], seq[20*i+10], seq[20*i+11], seq[20*i+12], seq[20*i+13], seq[20*i+14], seq[20*i+15], seq[20*i+16], seq[20*i+17], seq[20*i+18], seq[20*i+19]);
	}
	/*for(i=0;i<6667;i++){
		printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", seq[30*i], seq[30*i+1], seq[30*i+2], seq[30*i+3], seq[30*i+4], seq[30*i+5], seq[30*i+6], seq[30*i+7], seq[30*i+8], seq[30*i+9], seq[30*i+10], seq[30*i+11], seq[30*i+12], seq[30*i+13], seq[30*i+14], seq[30*i+15], seq[30*i+16], seq[30*i+17], seq[30*i+18], seq[30*i+19], seq[30*i+20], seq[30*i+21], seq[30*i+22], seq[30*i+23], seq[30*i+24], seq[30*i+25], seq[30*i+26], seq[30*i+27], seq[30*i+28], seq[30*i+29]);
	}*/
}
