#include"header.h"

void factors(int n){
	int flag = 0, i=0, j=0, k=0, a[n];
	for(i=2; i<=n; i++){
		flag= 0;
		for(j=2; j<=sqrt(i); j++){
			if(i%j == 0){
				flag = 1;
				break;
			}
		}
				
		if(flag == 0)
			printf("%d ", i);
	}
	
	printf("\n");
}	

void main(){
	int n;	
	printf("enter n : ");
	scanf("%d", &n);
	factors(n);
}


