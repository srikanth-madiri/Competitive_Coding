#include<stdio.h>
#include<stdlib.h>

void main(){
    
    int n,i,search;
    scanf("%d", &n);
    int a[n];

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    scanf("%d",&search);
        
    for(i=0;i<n;i++)
        if(a[i]==search){
            printf("%d\n", i);
            break;
        }
}
