/*

   Sumit is doing research in mathematics . After doing lots of research, he struck in a problem . He found four numbers n,a, b and c .Now, he wants to know how many number exists which are less than or equal to n and are divisible by a ,b or c .

Input :

First line contains 't' denoting numbers of test cases
Next t lines contains 4 integers denoting n,a,b and c separated by space
Output :

't' lines containing the count of the numbers which are divisible by a,or b, or c
Constraints :

1<=t<=10^5
1<=n<=10^9
1<=a,b,c<=10^5
SAMPLE INPUT 
1
15 2 3 5
SAMPLE OUTPUT 
11

 */



#include<bits/stdc++.h>

using namespace std;

int main(){

	int n,t;long long a,b,c;
	cin>>t;

	while(t--){

		cin>>n>>a>>b>>c;

		long long res = n/a + n/b + n/c;
		long long x = (a*b)/__gcd(a,b);
		long long y = (a*c)/__gcd(a,c);
		long long z = (b*c)/__gcd(b,c);
		long long xyz = (x*c)/__gcd(x,c);
		res -= (n/x+n/y+n/z);
		res += n/xyz;

		cout<<res<<endl;
	}

	return 0;
}

