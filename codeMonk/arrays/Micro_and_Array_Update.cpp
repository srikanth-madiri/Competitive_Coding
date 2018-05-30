/*

Micro purchased an array A having N integer values. After playing it for a while, he got bored of it and decided to update value of its element. In one second he can increase value of each array element by 1. He wants each array element's value to become greater than or equal to K. Please help Micro to find out the minimum amount of time it will take, for him to do so.

Input: 
First line consists of a single integer, T, denoting the number of test cases. 
First line of each test case consists of two space separated integers denoting N and K. 
Second line of each test case consists of N space separated integers denoting the array A.

Output:
For each test case, print the minimum time in which all array elements will become greater than or equal to K. Print a new line after each test case.

SAMPLE INPUT 
2
3 4
1 2 5
3 2
2 5 5
SAMPLE OUTPUT 
3
0

*/


#include<bits/stdc++.h>

using namespace std;

int main(){

	int t,n,k,len,diff;
	cin>>t;

	while(t--){

		cin>>n>>k;
		int a[n];

		for(int i=0;i<n;i++)
			cin>>a[i];

		len = sizeof(a)/sizeof(a[0]);
		sort(a, a+len);
		if(k-a[0]>=0)
			cout<<k - a[0]<<endl;
		else
			cout<<0<<endl;

	}

	return 0;
}

