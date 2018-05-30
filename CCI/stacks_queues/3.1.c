/*Describe how you could use a single array to implement two stacks*/


#include"stdio.h"
#include"stdlib.h"

int n;

void pushA(int a[], int ele, int *topA, int topB){

	if(*(topA)+1 == topB)
		printf("Stack-1 is full!!!\n");
	else{
		*topA += 1;
		a[*topA] = ele;
	}
}

void pushB(int a[], int ele,int *topB, int topA){

	if(topA+1 == *topB)
		printf("Stack-2 is full!!!\n");
	else{
		*topB -= 1;
		a[*topB] = ele;
	}
}

int popA(int a[], int *topA){

	int ele=0;
	if(*topA <= 0){
		printf("Stack-1 is empty!!!\n");
		return -1;
	} 
	else{

		ele = a[*topA];
		*topA -= 1;
	}
	return ele;
}

int popB(int a[], int *topB){

	int ele;
	if(*topB >= n-1){
		printf("Stack-2 is empty!!!\n");
		return -1;
	} 
	else{

		*topB += 1;
		ele = a[*topB];
	}
	return ele;
}

void displayA(int a[], int topA){

	if(topA <= 0)
		printf("Stack-1 is empty!!!\n");

	else{
		for(int i=topA;i>0;i--)
			printf("%d\n",a[i]);
	}
}

void displayB(int a[], int topB){

	if(topB >= n-1)
		printf("Stack-2 is empty!!!\n");
	else{
		for(int i=topB;i<n-1;i++)
			printf("%d\n",a[i]);
	}
}

void main(){
	
	printf("Enter the size of stack : \n");
	scanf("%d", &n);
	int a[n],ch,ch1,ch2,topA=0,topB=n-1,ele,pop;
	for(;;){

		printf("\n1.stack-1\n2.stack-2\n");
		scanf("%d", &ch);
		switch(ch){

			case 1 : printf("\nSTACK-1\n\n1.push\n2.pop\n3.display\n");
				 scanf("%d", &ch1);
				 switch(ch1){

					case 1 : printf("enter the elem to be pushed :\n");
						 scanf("%d", &ele);
						 pushA(a,ele,&topA,topB);
						 break;
					
					case 2 : pop = popA(a,&topA);
						 if(pop == -1)
						 	continue;
						 printf("Popped elem is %d", pop);
						 break;
					
					case 3 : displayA(a,topA);
						 break;
					
					default : printf("Invalid option\n");
						  break;

				 }
				 break;

			case 2 : printf("\nSTACK-2\n\n1.push\n2.pop\n3.display\n");
				 scanf("%d", &ch2);
				 switch(ch2){

					case 1 : printf("enter the elem to be pushed :\n");
						 scanf("%d", &ele);
						 pushB(a,ele,&topB,topA);
						 break;
					
					case 2 : pop = popB(a,&topB);
						 if(pop == -1)
						 	continue;
						 printf("Popped elem is %d", pop);
						 break;
					
					case 3 : displayB(a,topB);
						 break;
					
					default : printf("Invalid option\n");
						  break;
				}
				break;
			default : printf("\nInvalid Option\n");
				  break;


		}
	}

}
