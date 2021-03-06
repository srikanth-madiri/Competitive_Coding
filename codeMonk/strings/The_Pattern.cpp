/*

   The Pattern
   Joey is always in fond of playing with patterns. So on his birthday his uncle gave him a mat.  Mat is a rectangular grid. i.e. there are  rows and  columns drawn on the mat.  Each cell of this grid is filled with either dot or star. Now Joey starts to fold this mat.  Firstly he folds the mat along the rows (top to down) until it transforms into a  grid (Neglect width of mat on each fold). After that he starts folding this along the columns (left to right) and finally transforms into a single cell. At the end Joey wants to know what will be on the top of that cell dot or star.

   See the below image for more explanation.
   img

   When star come over dot it converted to dot
   When star come over star, it remains star
   When dot come over dot, it remains dot
   When dot come over star, it converted to star

Input:
First line of Input contains an integer , denoting no of testcases.
First line of each testcase contains two integers  and , no of rows and columns in the grid(respectively).
Each of next  lines contains a string of length .

Output:
For each testcase print a single line, the character on the top of folded mat.

Constraints:



SAMPLE INPUT 
1
5 5
 *.***
 .**..
 .*.*.
 *...*
 ..*.*
 SAMPLE OUTPUT 
 *

 */


#include<bits/stdc++.h>

using namespace std;

int main(){

	int t,n,m;
	cin>>t;

	while(t--){

		cin>>n>>m;
		string a;
		for(int i=0;i<n;i++)
			cin>>a;

		cout<<a[m-1]<<endl;
	}

	return 0;
}

