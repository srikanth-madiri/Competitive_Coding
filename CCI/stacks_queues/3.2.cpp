/* How would you design a stack which, in addition to push and pop, has a function min 
which returns the minimum element? Push, pop and min should all operate in 0(1) time.*/

#include"bits/stdc++.h"

using namespace std;
int a[5], top=0, ele=0;

int main(){
	
	int ch,min = 999;
	for(;;){
		
		cout<<"\n1.push\n2.pop\n3.minimum\n";
		cin>>ch;
		if(ch == 1){
			if(top>4){
				cout<<"stack full\n";
				continue;
			}
			else{
				cout<<"enter the elem:\n";
				cin>>ele;
				a[top++] = ele;
				if(ele < min)
					min = ele;
			}
		}
		else if(ch == 2){
			
			if(top<=0)
				cout<<"stack is empty\n";
			else{

				cout<<"popped ele is : "<<a[top]<<"\n";
				top--;
			}

		}
		else{
			
			cout<<"min ele is :"<<min<<"\n";
		}
	}

	return 0;	
}
