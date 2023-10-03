#include <stdio.h>

int main(){
	int j,n,seq[100]={1,2,0},index=0,digit=1,a=0,i;
	scanf("%d", &n);
	while(seq[99]==0){
		for(i=0;i<seq[a];i++){
			if(seq[a]==0){
				seq[a]=i+1;
			}
			seq[index]=digit;
			index++;
		}
		a++;
		digit++;
		if(digit>n){
			digit=1;
		}
	}
	for(j=0;j<100;j++){
		printf("%d ", seq[j]);
	}
	return 0;
}
