#include"header.h"

void isPrime(int A) {
    int flag = 0,i = 0;
	
    for(i=2; i<=sqrt(A); i++){
        if(A%i == 0){
            flag = 1;
	    break;
	}
    }

    if(flag==0)
        printf("True\n");
    else
        printf("False\n");    
}

void main(){
	int n;
	printf("Enter the number : ");
	scanf("%d", &n);
	isPrime(n);
}
