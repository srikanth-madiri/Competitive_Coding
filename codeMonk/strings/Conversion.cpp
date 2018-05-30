/*

   Given a string, convert it into its number form .

   A or a -> 1
   B or b -> 2
   C or c -> 3
   . . .
   Z or z -> 26
   space -> $
Input:

test cases, t
string , s
Output:

Desired O/p

Constraints: string length <=200

SAMPLE INPUT 
2
AMbuj verma
Aaaa bBBB
SAMPLE OUTPUT 
11322110$22518131
1111$2222

 */


#include<bits/stdc++.h>
#include<string.h>
#include<cstdio>

using namespace std;

int main(){


	int n,len;
	cin>>n;
	cin.ignore();

	while(n--){
		string a, res="";
		getline(cin,a,'\n');
		//cout<<a<<endl;
		len=a.length();
		for(int i=0;i<len;i++){
			if(isupper(a[i]))
				res += to_string(a[i]-64);

			else if(islower(a[i]))
				res += to_string(a[i]-96);
			else
				res += '$';
		}
		cout<<res<<endl;

	}

	return 0;
}

