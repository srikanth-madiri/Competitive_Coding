/*

   Caesar's Cipher is a very famous encryption technique used in cryptography. It is a type of substitution cipher in which each letter in the plaintext is replaced by a letter some fixed number of positions down the alphabet. For example, with a shift of 3, D would be replaced by G, E would become H, X would become A and so on.

   Encryption of a letter X by a shift K can be described mathematically as  % .

   Given a plaintext and it's corresponding ciphertext, output the minimum non-negative value of shift that was used to encrypt the plaintext or else output 1 if it is not possible to obtain the given ciphertext from the given plaintext using Caesar's Cipher technique.

Input:

The first line of the input contains Q, denoting the number of queries.

The next Q lines contain two strings S and T consisting of only upper-case letters.

Output:

For each test-case, output a single non-negative integer denoting the minimum value of shift that was used to encrypt the plaintext or else print 1 if the answer doesn't exist.

Constraints:

SAMPLE INPUT 
2
ABC
DEF
AAA
PQR
SAMPLE OUTPUT 
3
-1

 */

#include<bits/stdc++.h>

using namespace std;

int main(){

	int n,len1,len2,diff;
	string a,b;
	cin>>n;

	while(n--){

		int flag = 0;
		cin>>a;
		cin>>b;

		len1 = a.length();
		//len2 = b.length();

		/*if(len1 != len2){

		  cout<<-1<<endl;
		  continue;
		  }*/

		diff = b[0] - a[0];

		if(diff < 0){
			diff = diff+26; 
		}

		for(int i=0;i<len1;i++){

			if(b[i]-a[i] < 0 && (b[i]-a[i]) +26 == diff)

				flag=1;

			else if(b[i]-a[i] >= 0 && b[i] - a[i] ==diff)

				flag=1;
			else{

				flag=0;
				cout<<-1<<endl;
				break;
			}

		}

		if(flag)

			cout<<diff<<endl;
	}

	return 0;
}

