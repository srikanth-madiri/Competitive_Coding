/*
Given	 a	 stack,	 how	 to	 reverse	 the	 elements	 of	 the	 stack	 using	 only	 stack
operations	(push	8s	pop)?
*/

#include"bits/stdc++.h"

using namespace std;

stack<int> a;

void reverse(){

	if(a.empty())
		return;
	int top;
	top = a.top();
	a.pop();
	reverse();
	a.push(top);
}

int main(){

	int n,ele;
	cout<<"enter the size of the stack :";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>ele;
		a.push(ele);
	}
	reverse();
	cout<<"\nStack contents:\n";
	for(int i=0;i<n;i++){
		cout<<a.top()<<"\n";
		a.pop();
	}
	return 0;
}

