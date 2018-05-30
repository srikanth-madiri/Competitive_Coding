#include "header.h"

void merge(int *a ,int *b, int bn, int *c, int cn){
	int i=0,j=0,k=0;//i for b and j for c and k for a

	while(i<bn && j<cn)
	{
		if(b[i]<c[j])
			a[k++] = b[i++];
		else
			a[k++] = c[j++];
	}
	
	while(i<bn)
		a[k++] = b[i++];
	while(j<cn)
		a[k++] = c[j++];
}


void merge_sort(int *a, int n){
	
	if(n < 2) //checking forthe last recursive call
		return;
	int i, j;
	int mid = n/2;
	int bn  = mid;
	int cn = n-mid;
	int b[bn], c[cn];
	for(i=0;i<bn;i++)
		b[i] = a[i];

	for(j=0;j<cn;j++)
		c[j] = a[i++];

	merge_sort(b, bn);
	merge_sort(c, cn);
	merge(a, b, bn, c, cn);
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
	merge_sort(a, n);
	for(int i=0;i<n;i++)
		printf("%d ", a[i]);
	printf("\n");
}


