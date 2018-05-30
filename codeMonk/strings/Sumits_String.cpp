/*

   Given a string 'S' , u need to tell whether it is 'sumit's string or not'.

   A string is called 'Sumit's String' , if distance between adjacent character is 1.

   Consider that the alphabets are arranged in cyclic manner from 'a' to 'z'. distance between any character 'x' and 'y' will be defined as minimum number of steps it takes 'x' to reach 'y'. Here, character 'x' can start moving clockwise or anti-clockwise in order to reach at position where character 'y' is placed.

   Print 'YES' if it is Sumit's string else print 'NO', for each yest case.

Input :

test cases, t
string , s
Output:

Desired O/p

Constraints :

string length<=250
string has only lower case letters
SAMPLE INPUT 
3
aba
zza
bcd
SAMPLE OUTPUT 
YES
NO
YES


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

		for(int i=0;i<len-1;i++){

			if(a[i] =='a' &&(a[i+1]=='b' || a[i+1]=='z')){
				continue;
			}

			else if(a[i] =='z' &&(a[i+1]=='a' || a[i+1]=='y')){
				continue;
			}

			else if(abs(a[i]-a[i+1]) == 1)
				continue;

			else{
				//cout<<a[i]<<" "<<a[i+1]<<" "<<abs(a[i]-a[i+1])<<endl;
				cout<<"NO"<<endl;
				flag=0;
				break;
			}
		}

		if(flag)
			cout<<"YES"<<endl;
	}


	return 0;
}

