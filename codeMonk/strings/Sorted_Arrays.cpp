/*

   Alice has recently found an array a containing N integers. As we all know Alice loves sorted array so, he wants to sort the array. To sort an array Alice can add 1 to any integer in the array in 1 move.

   Alice wants to find minimum number of moves needed to sort this array. Remember that after sorting the array, all elements in it should be distinct.

   INPUT CONSTRAINTS

   INPUT FORMAT
   First line of input contains a single integer N.
   Second line of input contains N space separated inegers, elements of array a.

   OUTPUT FORMAT
   Output a single integer, denoting number of moves needed to sort the given array.

   SAMPLE INPUT 
   3
   1 6 5
   SAMPLE OUTPUT 
   2
   Explanation
   In first move Alice will add 1 to third integer then, in second move Alice will do the same he did in 1st move.


 */

#include<bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(false);

	int n;
	long long diff,ctr=0;
	cin>>n;

	vector<int> v(n);
	cin>>v[0];


	for(int i=1;i<n;i++){

		cin>>v[i];
		if(v[i-1] > v[i]){

			diff = v[i-1] - v[i];
			diff++; //since numbers shouldn't be same
			v[i] += diff;
			ctr += diff;
		}
	}

	cout<<ctr<<endl;

	return 0;
}

