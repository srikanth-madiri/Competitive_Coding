/*


   It's a fine sunny afternoon today in California. Looking at the pleasant weather, Sumit is all ready to go out and play with his friend Rohil. Unfortunately, Rohil is down with fever. Seeing that his friend is ill, Sumit decides not to go out - instead play with Rohil inside the house. Sumit loves math, on the contrary Rohil loves strings. Sumit decides to play a game that involves more of strings and less of Maths so that Rohil could be at ease and have fun playing it.

   The game is simple and is played on a piece of paper. Sumit writes down a long list of names on that paper and passes it to Rohil. Rohil gets confused on seeing so many names on that paper and asks Sumit about the game. So, Sumit explains him the rules of the game. Rohil is supposed to partition the names into groups, such that:

   Each name belongs to exactly one group.
   Names that belong to the same group are pairwise anagrams.
   The first character of all the names in the same group are equal.
   The last character of all the names in the same group are equal.
   The number of groups is minimum possible.
Note: Two strings are called anagrams if it's possible to form one string from the other by changing the order of its characters.

Rohil would have won the game easily, if he would have been fit and fine but since he is ill right now he needs your help in winning the game. So, help out Rohil and do give him your blessings.

Input:
The first line contains a single integer N indicating the size of the list. This is followed by N lines where each line contains a name listed by Sumit.

Output:
In a single line print minimum number of groups in a partition that satisfy above conditions

Constraints:
1<= N <=100
1 <= Length of a name <= 100

All names will consist of lowercase English alphabets(a-z).

SAMPLE INPUT 
6
vinay
vainy
vinit
viint
avinash
aasivnh
SAMPLE OUTPUT 
3


 */

#include<bits/stdc++.h>

using namespace std;

int main(){

	int n,len;
	string a;
	cin>>n;
	set<string> s;

	while(n--){

		cin>>a;
		len=a.length();

		string :: iterator itr1 = a.begin();

		len--;
		sort(itr1+1, itr1 + len);

		s.insert(a);
	}

	cout<<s.size()<<endl;

	return 0;
}

