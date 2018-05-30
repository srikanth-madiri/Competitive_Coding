#include "header.h"


void selection_sort(int *a, int n)
{
	int imin,i,j;
	for(i=0; i<n-1;i++)
	{
		imin = i;
		for(j = i+1; j<n;j++)
			if(a[j] < a[imin])
			{
				int temp = a[j];
				a[j] = a[imin];
				a[imin] = temp;
			}
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
	selection_sort(a, n);
}
