/*
Problem-8
Given	an	array	of	characters	formed	with	a’s	and	b’s.	The	string	is	marked	with
special	 character	 X	 which	 represents	 the	 middle	 of	 the	 list	 (for	 example:	 ababa...
ababXbabab	baaa).	Check	whether	the	string	is	palindrome.
*/


#include<bits/stdc++.h>

using namespace std;

int main(){
	
	string a;
	int flag=0,i=0,j=0;
	cin>>a;
	
	int n = a.length();
	j=n-1;
	
	while(i<j && a[i] == a[j]){
		
		i++;
		j--;

	}
	
	if(i==j)
		cout<<"Palindrome\n";
	else
		cout<<"Not Palindrome\n";

	return 0;

}
