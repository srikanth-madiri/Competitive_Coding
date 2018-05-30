#include<bits/stdc++.h>

using namespace std;

int main(){

	int n,ele;
	cin>>n;
	stack<int> a;

	for(int i=0;i<n;i++){
		cin>>ele;
		if(ele != 0)
			a.push(ele);

		else{
			if(!a.empty())
				a.pop();
		}
	}

	long long sum=0;
	while(!a.empty()){

		sum += a.top();
		a.pop();
	}

	cout<<sum<<endl;

	return 0;
}

