/*
Given	a	stack	of	integers,	how	do	you	check	whether	each	successive	pair	of
numbers	in	the	stack	is	consecutive	or	not.	The	pairs	can	be	increasing	or	decreasing,	and
if	the	stack	has	an	odd	number	of	elements,	the	element	at	the	top	is	left	out	of	a	pair.	For
example,	if	the	stack	of	elements	are	[4,	5,	-2,	-3,	11,	10,	5,	6,	20],	then	the	output	should
be	 true	 because	 each	 of	 the	 pairs	 (4,	 5),	 (-2,	 -3),	 (11,	 10),	 and	 (5,	 6)	 consists	 of
consecutive	numbers.
*/

#include<bits/stdc++.h>

using namespace std;

int main(){

	int n,ele;
	cin>>n;
	stack<int> a;
	for(int i=0;i<n;i++){
		cin>>ele;
		a.push(ele);
	}
	
	int top1,top2;
	if(a.size() % 2 ==0 ){
		for(int i=0;i<n/2;i++){
			top1 = a.top();
			a.pop();
			top2 = a.top();
			a.pop();
			if(abs(top1-top2) == 1)
				;
			else{
				cout<<"False\n";
				exit(0);
			}
		}
		cout<<"True\n";
	}
	else{

		
		for(int i=0;i<(n-1)/2;i++){
					
			top1 = a.top();
			a.pop();
			top2 = a.top();
			a.pop();
			if(abs(top1-top2) == 1)
				;
			else{
				cout<<"False\n";
				exit(0);
			}
		}
		cout<<"True\n";
	}
	
	return 0;
}
