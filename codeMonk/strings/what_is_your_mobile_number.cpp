/*

   These days Bechan Chacha is depressed because his crush gave him list of mobile number some of them are valid and some of them are invalid. Bechan Chacha has special power that he can pick his crush number only if he has valid set of mobile numbers. Help him to determine the valid numbers. 
   You are given a string "S" and you have to determine whether it is Valid mobile number or not. Mobile number is valid only if it is of length 10 , consists of numeric values and it shouldn't have prefix zeroes. 

Input:
First line of input is T representing total number of test cases.
Next T line each representing "S" as described in in problem statement. 

Output:
Print "YES" if it is valid mobile number else print "NO". 
Note: Quotes are for clarity. 
Constraints:
1<= T <= 103
sum of string length <= 105

SAMPLE INPUT 
3
1234567890
0123456789
0123456.87
SAMPLE OUTPUT 
YES
NO
NO


 */

#include<bits/stdc++.h>

using namespace std;

int main(){

	int n;
	string s;

	cin>>n;

	while(n--){

		int flag=1;
		cin>>s;

		if(s.length() != 10 || s[0] == '0'){
			cout<<"NO"<<endl;
			continue;

		}

		for(int i=0;i<s.length();i++){

			if(!isdigit(s[i])){
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

