#include "header.h"

void insertion_sort(int *arr, int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
 
       /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
   for(i=0;i<n;i++)
	printf("%d ",arr[i]);
   printf("\n");
}

void main(){
	
	int i,n;
	printf("enter the no of array elements: ");
	scanf("%d", &n);
	printf("enter the values : \n");
	int arr[n];
	for(i = 0; i<n;i++)
		scanf("%d", &arr[i]);
	insertion_sort(arr, n);
}
