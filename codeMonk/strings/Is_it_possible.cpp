/*

   Ramu and shyamu discovered a treasure which has 'n' amount of gold coins.

   Output 'YES' if the treasure can be equally divided between 'Ramu' and 'Shyamu' else o/p 'NO"

Input:

test cases, t
number of gold coins, n
Output:

desired O/p
Constraints:

1<=t<=100000
1<=n<=10^100
SAMPLE INPUT 
3
2
5
6
SAMPLE OUTPUT 
YES
NO
YES

 */

#include<bits/stdc++.h>

using namespace std;

int main(){

	unsigned long long n;
	string a;
	cin>>n;

	while(n--){

		cin>>a;

		if(a[a.length()-1]%2 == 0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

	return 0;
}

