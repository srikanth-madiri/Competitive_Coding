/*

   Danny has a possible list of passwords of Manny's facebook account. All passwords length is odd. But Danny knows that Manny is a big fan of palindromes. So, his password and reverse of his password both should be in the list.

   You have to print the length of Manny's password and it's middle character.

Note : The solution will be unique.

INPUT 
The first line of input contains the integer N, the number of possible passwords. 
Each of the following N lines contains a single word, its length being an odd number greater than 2 and lesser than . All characters are lowercase letters of the English alphabet.

OUTPUT 
The first and only line of output must contain the length of the correct password and its central letter.

CONSTRAINTS 

SAMPLE INPUT 
4
abc
def
feg
cba
SAMPLE OUTPUT 
3 b

 */

#include<bits/stdc++.h>

using namespace std;

void palin(string str1, string str2, int len){

	for(int i=0;i<len;i++){
		if(str1[i] != str2[len-i-1])
			return;
	}
	cout<<len<<" "<<str1[len/2]<<endl;
}

int main(){

	int n,m,len1,len2;
	cin>>n;
	m=n;
	string a[n];
	int i=0;
	while(m--){
		cin>>a[i];
		//cout<<a[i]<<endl;
		i++;
	}

	string s1,s2;

	for(int i=0;i<n;i++){

		s1=a[i];
		len1=s1.length();

		for(int j=i+1;j<n;j++){
			s2=a[j];
			len2=s2.length();
			if(len1 == len2){
				palin(s1,s2,len1);
			}
		}
	}

	return 0;
}
