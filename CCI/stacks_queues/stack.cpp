#include<bits/stdc++.h>

using namespace std;

int a[5],top=-1;

void push(int num){

	if(top>4)
		cout<<"\nstack full\n";
	else
		a[++top] = num;
}
void pop(){

	if(top<0)
		cout<<"\nstack empty\n";
	else{
		int e = a[top--];
		cout<<"popped : "<<e<<"\n";
	}
}

void dis(){

	if(top<0)
		cout<<"\nstack empty\n";
	for(int i=top;i>-1;i--)
		cout<<a[i]<<"\n";
}

int main(){
	
	int ch;
	for(;;){

		cout<<"1.push\n2.pop\n3.display\n";
		cin>>ch;
		switch(ch){

			case 1 :int ele;
				cout<<"num : \n";
				cin>>ele;
				push(ele);
				break;
			case 2 :
				pop();
				break;
			case 3 : dis();
				break;
		}

	}
}
