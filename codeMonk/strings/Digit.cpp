/*

   Given A Number N, Find The Number Of Digits In N.

   Input Format

   First Line Take Input Value Of N

   Output Format

   Number Of Digits In N

   Constraints

   0 < N < 10 100
   SAMPLE INPUT 
   12345678
   SAMPLE OUTPUT 
   8


 */

#include<bits/stdc++.h>

using namespace std;

int main(){

	string a;
	cin>>a;
	/*
	   with container algorithm

	   cout<<a.length();

	 */

	/*
	   without container algorithm
	 */
	int i=0, ctr=0;

	while(a[i]){
		ctr++;
		i++;
	}
	cout<<ctr;

	return 0;
}

