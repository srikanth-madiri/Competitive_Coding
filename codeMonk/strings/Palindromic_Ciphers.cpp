/*

   Julius Cipher is a type of cipher which relates all the lowercase alphabets to their numerical position in the alphabet, i.e., value of a is 1, value of b is 2, value of z is 26 and similarly for the rest of them.

   Little Chandan is obsessed with this Cipher and he keeps converting every single string he gets, to the final value one gets after the multiplication of the Julius Cipher values of a string. Arjit is fed up of Chandan's silly activities, so he decides to at least restrict Chandan's bad habits.

   So, he asks Chandan not to touch any string which is a palindrome, otherwise he is allowed to find the product of the Julius Cipher values of the string.

Input: 
The first line contains t number of test cases. The first line of every test case contains a string, S.

Output: 
Print the value if the string is not a palindrome, otherwise print Palindrome - where value is equal to the product of all the characters of Julius Cipher values.

Constraints: 1 <= T <= 102
1<=length of the string<=10

Note:
The string will contain only lowercase letters.

SAMPLE INPUT 
2
zazaz
goodarjit
SAMPLE OUTPUT 
Palindrome
204120000


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
				break;
			}
		}

		if(flag)
			cout<<"Palindrome"<<endl;
		else{

			long long prod =1;

			for(int i=0;i<len;i++){

				prod *= (a[i]-96);
			}
			cout<<prod<<endl;
		}
	}

	return 0;
}

