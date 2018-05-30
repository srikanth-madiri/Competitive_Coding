/*

   Given an encrypted message, Erwin encodes it the following way:

   Removes the median letter of the word from the original word and appends it to the end of the encrypted word and repeats the process until there are no letters left.

   A median letter in a word is the letter present in the middle of the word and if the word length is even, the median letter is the left one out of the two middle letters.

   Given an encoded string, write a program to decode it.

   Input Format:

   The first line of input contains T, the number of test cases. 
   Each test case contains a String S, denoting the encoded word.

   Output Format:

   Print the decoded word for each test case in a separate line.

   Constraints



   SAMPLE INPUT 
   2
   wrien
   reen
   SAMPLE OUTPUT 
   erwin
   eren

 */

#include<bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(false);

	int n,len,flag;
	string res;
	cin>>n;

	while(n--){

		string s;
		cin>>s;

		len = s.length();
		flag =0;
		res = "";
		res += s[0];

		if(len%2 != 0){

			for(int i=1;i<len;i++){

				if(flag == 0){

					res = s[i] + res;
					flag=1;
				}

				else if(flag == 1){

					res = res + s[i];
					flag=0;
				}

			}
		}

		else{

			for(int i=1;i<len;i++){

				if(flag == 0){

					res = res + s[i];
					flag=1;
				}

				else if(flag == 1){

					res = s[i] + res;
					flag=0;
				}

			}
		}

		cout<<res<<endl;
	}

	return 0;
}

