/* Is Unique: Implement an algorithm to determine if a string has all unique characters. What if you cannot use additional data structures?*/

#include<bits/stdc++.h>

using namespace std;

int main(){

	string a;
	cout<<"Enter the string : ";
	cin>>a;
	unordered_set<char> us;

	for(int i=0;i<a.length();i++){
	
		if(us.find(a[i]) == us.end())

			us.insert(a[i]);
		else{

			cout<<"\nNot all the chars are unique Unique\n";
			return 0;
		}
	}

	cout<<"\nAll the chars are Unique\n";

	return 0;
}

