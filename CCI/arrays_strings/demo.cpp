#include<bits/stdc++.h>

using namespace std;

int main(){

	int a[5]={1,2,3,6,5}, b[5]={1,2,3,4,5};

	int *ptr_a = a;
	int *ptr_b = b;

	for(int i=0;i<5;i++){
		
		if(*ptr_a != *ptr_b){
			cout<<"\nnot\n";
			break;
		}
		else{
			*ptr_a++;
			*ptr_b++;
			
		}
		
	}

	return 0;

}
