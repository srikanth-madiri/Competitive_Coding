#include<stdio.h>
#include<stdlib.h>

void main(){
    
    int n,i,search,nope=-1;
    scanf("%d%d", &n, &search);
    int a[n];
    for(i=0;i<n;i++){
    	scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--){
        if(a[i]==search){
            printf("%d",i+1);
            exit(0);   
        }
        
        if(i==0)
            printf("%d",nope);
    }
}
