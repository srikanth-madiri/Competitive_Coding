#include "header.h"

int partition(int *a, int l, int r){
	int i = l; 
	int j = r; 
	int pivot = a[l]; 
	int temp;
	
	while(i<=j){
		while(a[i] <= pivot && i<=r)
		 i++;
		
		while(a[j] > pivot && j>l)
		 j--;

		if(i<j){ //interchange i and j 
		 temp = a[i];
		 a[i] = a[j];
		 a[j] = temp;
		}
	}
		
	temp = a[l];//interchange pivot and a[j] (if i crosses j)
	a[l] = a[j];
	a[j] = temp;
	return j;
}

void quick_sort(int *a, int l, int r){
	if(l<r){
	 int p = partition(a, l, r);
	 quick_sort(a, l, p-1);
	 quick_sort(a, p+1, r);
	}
}

void main()
{	
	int i,n;
	printf("enter the no of array elements: ");
	scanf("%d", &n);
	printf("enter the values : \n");
	int a[n];
	for(i=0; i<n;i++)
		scanf("%d", &a[i]);
	quick_sort(a, 0, n-1);
	for(int i=0;i<n;i++)
		printf("%d ", a[i]);
	printf("\n");
}
