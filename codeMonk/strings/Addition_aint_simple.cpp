/*

   Jack is awesome. His friends call him little Einstein. To test him, his friends gave him a string. They told him to add the string with its reverse string and follow these rules:

   Every ith character of string will be added to every ith character of reverse string.
   Both string will contain only lower case alphabets(a-z).
Eg:- a+a=b,a+c=d,z+a=a (Refer to sample test cases for more details)
Input:

First line contains a value N denoting number of test cases. Next N lines contains string str.

Output:

For every string str output the string that Jack's friends wants from him.

Constraints

1 <= N <= 10

1 <= str <= 10^5

SAMPLE INPUT 
4
hello
codeapocalypse
programming
world
SAMPLE OUTPUT 
wqxqw
hhtdmqrrqmdthh
wfxtebetxfw
aajaa

 */

#include<bits/stdc++.h>

using namespace std;

int main(){

	int n;
	cin>>n;

	while(n--){

		string a;
		cin>>a;
		int len = a.length();
		char ch;
		for(int i=0;i<len;i++){

			if(((a[i]-96) + (a[len-i-1]-96))+96 > 122){

				ch = (((a[i]-96)+(a[len-i-1]-96))+96)-26;
				cout<<ch;
			}
			else{

				ch = (((a[i]-96)+(a[len-i-1]-96))+96);
				cout<<ch;
			}
		}

		cout<<endl;
	}

	return 0;
}
