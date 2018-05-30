#include "header.h"

void main()
{	int i=0,j=0,m=0,n=0;
	printf("enter the a and b:\n");
	scanf("%d%d",&m,&n);
	int a[m][n];
	printf("enter the matrix:\n");
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d", &a[i][j]);
	int t=0,b=m-1,l=0,r=n-1,dir=0;
	while(t <= b && l <= r)
	{
	 if(dir == 0)
	 {
	  for(i=l;i<=r;i++)
	  {
	   printf("%d ", a[t][i]);
	  }
	  t++;dir=1;
	 }


	 if(dir == 1)
	 {
	  for(i=t;i<=b;i++)
	  {
	   printf("%d ", a[i][r]);
	  }
	  r--;dir=2;
	 }


	 if(dir == 2)
	 {
	  for(i=r;i>=l;i--)
	  {
	   printf("%d ", a[b][i]);
	  }
	  b--;dir=3;
	 }


	 if(dir == 3)
	 {
	  for(i=b;i>=t;i--)
	  {
	   printf("%d ", a[i][l]);
	  }
	  l++;dir=0;
	 }
	}
	printf("\n");

}
