/*

   and  decided to play a game. The game comprises of a String S which consist of lowercase English alphabets only and both players take alternative terms.

   In each turn, a Player choose a character present in the string and remove all occurrences of the character. For each player to play his turn, there should be at least one character in the string. The Player who is not able to play his turn loses.

   Your task is to find the winner of the game, if both the players play optimally and plays the first turn.

   Input Format : 
   The input starts with an integer T, the number of test cases. 
   Each test case contains an String S on a new line.
   Output Format: 
   Print "" if  Wins or "" if  Wins (without quotes). For each test case, print the output in new line.

Constraints:



All characters are lowercase English alphabets.

SAMPLE INPUT 
1
aba
SAMPLE OUTPUT 
Player2


 */


#include<bits/stdc++.h>

using namespace std;

int main(){

	int n,len;
	cin>>n;
	string a;

	while(n--){


		int flag=0;
		cin>>a;
		len=a.length();
		set <char> uset(a.begin(),a.end());

		if(uset.size()%2 == 0)
			cout<<"Player2"<<endl;

		else
			cout<<"Player1"<<endl;
	}

	return 0;
}

