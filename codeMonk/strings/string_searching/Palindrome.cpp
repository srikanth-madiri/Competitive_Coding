/*

   John loves to play with strings. Today he is playing with a special type of string called "palindrome". A palindrome is a string which reads the same backward and forward. John received a sack full of strings. There are T strings in the sack, he removes the strings one by one, John is happy if the string he picked is a palindrome. Once a string is chosen, he discards it.

   Your task is to find for each string whether it is a palindrome or not. If the chosen string is a palindrome, print YES else print NO.

   Input

   The input consists of T strings each in a newline.

   Output

   For each string print YES, if the string is a palindrome else print NO.

   Constraints

   1 <= T <= 150

   1 <= |lengthofString| <= 2000

   SAMPLE INPUT 
   3
   abba
   aaaa
   abcd
   SAMPLE OUTPUT 
   YES
   YES
   NO
   Explanation
   You have given a string where you have to check if the given string is palindrome or not


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
			if(a[i] != a[len-i-1]){
				flag=0;
				cout<<"NO"<<endl;
				break;
			}
		}

		if(flag)
			cout<<"YES"<<endl;
	}

	return 0;
}

