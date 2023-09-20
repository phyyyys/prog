#include <stdio.h>

int main(){
	int m,n,x;
	scanf("%d %d", &m, &n);
	while(m!=0){
		for(x=1;m!=0;x++){
			if(m*x>=n){
				printf("%d", x);
				m = m * x - n;
				n = n * x;
				break;
			}
		}
	}
	return 0;
}
