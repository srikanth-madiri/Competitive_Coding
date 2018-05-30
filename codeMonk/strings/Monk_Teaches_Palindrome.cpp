/*

   Monk introduces the concept of palindrome saying,"A palindrome is a sequence of characters which reads the same backward or forward." 
   Now, since he loves things to be binary, he asks you to find whether the given string is palindrome or not. If a given string is palindrome, you need to state that it is even palindrome (palindrome with even length) or odd palindrome (palindrome with odd length).

Input:
The first line consists of T, denoting the number of test cases.
Next follow T lines, each line consisting of a string of lowercase English alphabets.

Output:
For each string , you need to find whether it is palindrome or not.
If it is not a palindrome, print NO.
If it is a palindrome, print YES followed by a space; then print EVEN it is an even palindrome else print ODD.
Output for each string should be in a separate line.
See the sample output for clarification.

Constraints:



SAMPLE INPUT 
3
abc
abba
aba
SAMPLE OUTPUT 
NO
YES EVEN
YES ODD


 */




#include<bits/stdc++.h>

using namespace std;

int main(){

	int n;
	cin>>n;
	string a;

	while(n--){
		int flag=1;
		cin>>a;
		int len = a.length();
		for(int i=0;i<len;i++){

			if(a[i] != a[len-i-1]){
				flag = 0;
				break;
			}
		}

		if(flag && len%2==0)
			cout<<"YES EVEN"<<endl;
		else if(flag && len%2!=0)
			cout<<"YES ODD"<<endl;
		else
			cout<<"NO"<<endl;

	}

	return 0;
}

