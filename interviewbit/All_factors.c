#include"header.h"

void allFactors(int A) {
    int *out = (int*)malloc((A)*sizeof(int));
    int count = A/2;
    int i,n=0;
    for(i=1;i<=count;i++){
        if(A%i == 0){
            out[n++] = i;
        }
    }out[n++] = A;
    for(i=0;i<n;i++)
        printf("%d ",out[i]);
    printf("\n");
    
}

void main(){
	int n;
	printf("Enter the number : ");
	scanf("%d", &n);
	allFactors(n);
}
