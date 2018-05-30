/*

   Given a string containing only lower case letters ,print first occurrence of all the letters present in that order only.

Input :

Test cases, t
string ,s
Output :

Desired Output

Constraint :

string length <=200

SAMPLE INPUT 
2
aasdvasvavda
sajhags
SAMPLE OUTPUT 
asdv
sajhg

 */

#include<bits/stdc++.h>

using namespace std;

int main(){

	int n,len;
	string s;
	cin>>n;

	while(n--){

		string res="";
		unordered_set<char> set;
		cin>>s;
		len = s.length();

		for(int i=0;i<len;i++){

			if(set.find(s[i]) == set.end()){
				set.insert(s[i]);
				res += s[i];
			}
		}

		cout<<res<<endl;
	}

	return 0;
}

