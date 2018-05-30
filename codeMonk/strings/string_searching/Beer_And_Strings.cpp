/*

   Beer found a list of string recently. A game came into his mind instantaneously. The game is as awkward as beer's name :D The game is how many of the strings can be made using characters of Beer's all time favorite string X

   Input

   First line of input contain Beer's favorite string X

   Second line of the input contains a integer n number of string in the list. n line follows  line contains  string of the list.

   Output

   Output a single integer denoting the number of strings in the list which can be formed using letters of Beer's favorite string.

   Constraints





   X consist of lowercase alphabets only

   NOTE Please use fast I/O for this problem

   SAMPLE INPUT 
   abcd
   2
   ab
   ef
   SAMPLE OUTPUT 
   1
   Explanation
   can be made using letters of  but  can't be made using letters of 




 */

#include<bits/stdc++.h>

using namespace std;

int main(){

	string a,b;
	int len1,len2;
	cin>>a;
	len1 = a.length();
	set<char> s;

	for(int i=0;i<len1;i++)
		s.insert(a[i]);
	int n;
	cin>>n;
	int ctr = 0;     
	while(n--){
		int flag=1;
		cin>>b;
		len2 = b.length();

		for(int i=0;i<len2;i++){

			if(s.find(b[i])== s.end()){
				flag=0;
				break;
			}
		}
		if(flag)
			ctr++;
	}

	cout<<ctr<<endl;

	return 0;
}

