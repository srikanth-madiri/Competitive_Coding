/*

   You are given a string S. S consists of several words separated by one or more spaces. Word consists of Latin letters as well as other symbols (but not spaces).
   In each word which starts from lowercase Latin letter replace starting letter with uppercase Latin letter.

   Input
   The only line contains S

   Output
   Output one line with modified string S.

   Constraints
   1 <= length of S <= 30 000

   SAMPLE INPUT 
   Wish you were here
   SAMPLE OUTPUT 
   Wish You Were Here

 */

#include<bits/stdc++.h>

using namespace std;

int main(){

	int len;
	string a;
	getline(cin,a);
	len = a.length();

	if(a[0] >= 97){

		a[0] -= 32;    
	}

	for(int i=1;i<len;i++){

		if(a[i] == ' '){

			if(a[i+1] >= 97){

				a[i+1] -= 32;    
			}
		}
	}

	cout<<a<<endl;

	return 0;
}

