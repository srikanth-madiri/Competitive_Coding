#include "header.h"


void bubble_sort(int *a, int n)
{	int flag=0,i,j;
	for(i=0;i<=n-1;i++)
	{
	 //flag = 0;
	 for(j=0;j<=n-i-1;j++)
	 {
	  if(a[j]>a[j+1])
	  {
	   int temp = a[j];
	   a[j] = a[j+1];
	   a[j+1] = temp;
		for(int k=0;k<n;k++)
			printf("%d ",a[k]);
		printf("\n");
	
	   flag = 1; //telling that swap has been done so still not sorted
	  }
	 }
	 //if(flag ==0) //if flag is 0 then it indicates that there has been no swap so the array is sorted
	  // break;
	}
	
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}

void main()
{	
	int i,n;
	printf("enter the no of array elements: ");
	scanf("%d", &n);
	printf("enter the values : \n");
	int a[n];
	for(i = 0; i<n;i++)
		scanf("%d", &a[i]);
	bubble_sort(a, n);
}
