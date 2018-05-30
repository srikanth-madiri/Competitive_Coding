/*

   This time your task is simple.

   Given two integers X and K, find the largest number that can be formed by changing digits at atmost K places in the number X.

Input:

First line of the input contains two integers X and K separated by a single space.

Output:

Print the largest number formed in a single line.

Constraints:


SAMPLE INPUT 
4483 2
SAMPLE OUTPUT 
9983

 */



#include<bits/stdc++.h>

using namespace std;

int main(){

	int k;
	string a;
	cin>>a>>k;
	int len = a.length();

	int i=0;

	while(k>0){
		if(a[i] != '9'){

			a[i]='9';
			k--;
			i++;
			if(i>len)
				break;
		}

		else
			i++;
	}

	cout<<a<<endl;

	return 0;
}

