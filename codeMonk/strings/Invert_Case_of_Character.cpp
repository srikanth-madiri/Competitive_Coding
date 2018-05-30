/*

   You are given a string S followed by two integers N1 and N2. You need to change the case of character at those two indices as specified by the two integers.

   Input Format

   First line contains the string S Second line contains two integers separated by single space

   Output Format

   It should print the string with case changed at those locations

   SAMPLE INPUT 
   Jamia Hamdard
   2 9
   SAMPLE OUTPUT 
   JAmia HaMdard

 */

#include<bits/stdc++.h>

using namespace std;

int main(){

	int len,a,b;
	string s;

	getline(cin,s);
	len = s.length();
	cin>>a>>b;

	if(s[a-1] >= 97 && s[a-1] <= 122)

		s[a-1] -= 32;

	else if(s[a-1] >= 65 && s[a-1] <= 90)

		s[a-1] += 32;


	if(s[b-1] >= 97 && s[a-1] <= 122)

		s[b-1] -= 32;

	else if(s[b-1] >= 65 && s[b-1] <= 90)

		s[b-1] += 32;

	cout<<s<<endl;

	return 0;
}

