/*Given two strings, write a method to decide if one is a permutation of the other.*/


#include<bits/stdc++.h>

using namespace std;

int main(){
	string aa, bb;
	cout<<"enter the string 1: \n";
	cin>>aa;
	cout<<"enter the string 2: \n";
	cin>>bb;
	
	int len_a, len_b;
	len_a = aa.length();
	len_b = bb.length();
	
	char a[len_a+1];
	char b[len_b+1];

	strcpy(a, aa.c_str());
	strcpy(b, bb.c_str());

	if(len_a != len_b){
		cout<<"\nnot a permutation\n";
		return 0;
	}

	sort(a, a+len_a);
	sort(b, b+len_b);
	char *ptr_a=a, *ptr_b=b;

	for(int i=0;i<len_a;i++){

		if(*ptr_a != *ptr_b){
			cout<<"\nnot a permutation\n";
			return 0;
		}
		
		*ptr_a++;
		*ptr_b++;
	}
	
	cout<<"Yes permutation\n";
	return 0;
}
