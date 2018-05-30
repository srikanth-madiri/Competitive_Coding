/*

   The little Monk loves to play with strings. One day he was going to a forest. On the way to the forest he saw a Big Tree(The magical tree of the forest). The magic of the tree was that, every leaf of the tree was in the format of string(having some value). Monk wants to have these type of leaves. But he can take only one. Help Monk to choose the most valuable leaf.

   Format of the leaf:

   a+b+c-d+c+d-x-y+x........, i.e. it contains a string holding a mathematical expression, and the value of that expression will be value of that particular leaf.

   e.g. 4+2-5+3+2-4
value: 2
Input:

First line contains L(No of leaves on the Tree).
Each of the next L line contain a string(Expression).
Output:

Print a single line having value of most valuable string.
Constraints:

 * The Expression will have only + and - operations
 * String will contain only single valued digits.
 SAMPLE INPUT 
 4
 8-6+2+4+3-6+1
 1+1+1+1
 2+3+6+8-9
 2+7+1-6
 SAMPLE OUTPUT 
 10

 */


#include<bits/stdc++.h>

using namespace std;

int main(){

	int n,len;
	cin>>n;
	string a;
	vector<int> v;

	while(n--){
		int sum=0;
		cin>>a;
		len = a.length();

		if(a[1] == '+')
			sum += (a[0]-48) + (a[2]-48);
		else
			sum += (a[0]-48) - (a[2]-48);

		for(int i=3;i<len;i+=2){

			if(a[i] == '+')
				sum += (a[i+1]-48);
			else
				sum -= (a[i+1]-48);

		}
		//cout<<sum<<" ";
		v.push_back(sum);
	}

	sort(v.begin(), v.end(), greater<int>());
	cout<<v[0]<<endl;

	return 0;
}

