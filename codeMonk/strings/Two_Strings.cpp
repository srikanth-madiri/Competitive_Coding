/*

   Given two strings of equal length, you have to tell whether they both strings are identical.

   Two strings S1 and S2 are said to be identical, if any of the permutation of string S1 is equal to the string S2. See Sample explanation for more details.

Input :

First line, contains an intger 'T' denoting no. of test cases.
Each test consists of a single line, containing two space separated strings S1 and S2 of equal length.
Output:

For each test case, if any of the permutation of string S1 is equal to the string S2 print YES else print NO.
Constraints:

1<= T <=100
1<= |S1| = |S2| <= 10^5
String is made up of lower case letters only.
Note : Use Hashing Concept Only . Try to do it in O(string length) .

SAMPLE INPUT 
3
sumit mitsu
ambuj jumba
abhi hibb
SAMPLE OUTPUT 
YES
YES
NO

 */

#include<bits/stdc++.h>

using namespace std;

int main(){

	int n, len;
	string a,b;

	cin>>n;

	while(n--){
		int flag=1;
		cin>>a>>b;

		len = a.length();

		if(len == b.length()){

			sort(a.begin(), a.end());
			sort(b.begin(), b.end());

			for(int i=0;i<len;i++){
				if(a[i] != b[i]){
					flag=0;
					cout<<"NO"<<endl;
					break;
				}
			}

			if(flag == 1)
				cout<<"YES"<<endl;

		}
	}

	return 0;
}

