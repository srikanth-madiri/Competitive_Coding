/*

   You are given a string S.You need to check whether it's a palindrome or not. Print "YES" (without quotes) if S is a palindrome and "NO" (without quotes) if S is not a palindrome.

   To know what a palindrome is you can check http://bit.ly/HashesPallindrome

   INPUT First line will contain an integer T that is the number of test cases. The following T lines will contain: -A string S consisting of only lowercase letters.

   OUTPUT Output YES or NO in new line for each test case.

   SAMPLE INPUT 
   1
   aba
   SAMPLE OUTPUT 
   YES

 */

#include<bits/stdc++.h>

using namespace std;

int main(){

	int n,len;
	string a;
	cin>>n;

	while(n--){
		int flag=1;
		cin>>a;
		len = a.length();

		for(int i=0;i<len;i++){
			if(a[i] == a[len-i-1])
				flag=1;
			else{
				flag=0;
				break;
			}

		}
		if(flag)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

	return 0;
}

