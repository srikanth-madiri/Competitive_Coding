#include<bits/stdc++.h>

using namespace std;

void show_stack(stack<int> a){
	
	stack<int> b =  a;	
	
	while(!a.empty()){
		
		cout<<b.top()<<"\t";
		b.pop();
		if(b.empty()){
			cout<<"\nStack Empty\n";
			break;
		}
	}
}

int main(){
	
	stack<int> a;

	//push operations
	for(int i=0;i<10;i++)
		a.push(i);
	
	cout<<"\nsize : "<<a.size()<<"\n";
	cout<<a.top()<<"\n";
	cout<<a.pop()<<"\n";
	
	show_stack(a);
	
	cout<<"\nsize : "<<a.size()<<"\n";

	

}
