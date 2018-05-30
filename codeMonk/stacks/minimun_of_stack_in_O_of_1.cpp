#include"bits/stdc++.h"

using namespace std;

int main(){
	
	int n, value;
	cin>>n;
	stack<int> a, b;
	
	cin>>value;
	a.push(value);
	b.push(value);

	for(int i=1;i<n;i++){
		
		cin>>value;
		a.push(value);
		if(value < b.top()){
			b.pop();
			b.push(value);
		}

	}
	cout<<"Stack A :\n";
	while(!a.empty()){
		cout<<a.top()<<"\n";
		a.pop();
	}
	
	cout<<"\nMinimun Element : \n"<<b.top()<<"\n";

	return 0;
}
