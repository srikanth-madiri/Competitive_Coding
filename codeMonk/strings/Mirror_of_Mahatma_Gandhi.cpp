/*

   On the way to Dandi March, Gandhijee carried a mirror with himself. 
   When he reached Dandi, he decided to play a game with the tired people to give them some strength. 
   At each turn of the game he pointed out a person and told him to say a number N(possibly huge) of his choice. 
   The number was called lucky if that equals it's mirror image.

Input: 
First line contains number of test cases T. Each test case contains a single integer N.
Output: 
For each test case print "YES" if the number was lucky else print "NO" (quotes for clarity) in one line.

Constraints:
1 ≤ T ≤ 100
0 ≤ N ≤ 10100

Image for Sample Test Cases :

enter image description here

SAMPLE INPUT 
2
101
020
SAMPLE OUTPUT 
YES
NO
Explanation
For 1st case, as clear from the image "101" and it's mirror image are identical. Hence, output "YES". For 2nd case, "020" and it's mirror image are not identical. Hence output "NO".


 */

#include<bits/stdc++.h>

using namespace std;

int main(){

	int n,len,flag;
	string a;
	cin>>n;

	while(n--){

		flag=1;
		cin>>a;
		len = a.length();

		for(int i=0;i<len;i++){

			if(a[i] == a[len-i-1]){

				if(a[i] == '0' || a[i] == '1' || a[i] == '8'){

					flag=1;
				}

				else{

					flag=0;
					break;
				}
			}

			else{

				flag=0;
				break;

			}
		}

		if(flag)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

	return 0;
}

