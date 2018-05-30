/*

   Bob and Khatu are brave soldiers in World War 3. They have spotted an enemy troop which is planting bombs. They sent message to the command centre containing characters W and B where W represents a wall and B represents a Bomb. They asked command to tell them how many walls will be destroyed if all bombs explode at once. One bomb can destroy 2 walls on both sides.

Input:

First line of input contains number of test cases T. Each test case contains a single string which contains two type of chars 'W' and 'B'.

Output:

For each test case print the total number of destroyed wall.

Constraints:

1 ≤ T ≤ 10
1 ≤ |S| ≤ 105

SAMPLE INPUT 
3
WBW
WWBWWBW
BWWWBWBWW
SAMPLE OUTPUT 
2
5
6


 */

#include<bits/stdc++.h>

using namespace std;

int main(){

	int n,len;
	string a;
	cin>>n;

	while(n--){

		int ctr=0;
		cin>>a;
		len = a.length();

		if(a[0] == 'B'){

			if(a[1] == 'W'){
				ctr++;
				a[1] = '@';
			}

			if(a[2] == 'W'){
				ctr++;
				a[2] = '@';
			}
		}

		if(1<len && a[1] == 'B'){

			if(a[0] == 'W'){
				ctr++;
				a[0] = '@';
			}

			if(2<len && a[2] == 'W'){
				ctr++;
				a[2] = '@';
			}

			if( 3<len && a[3] == 'W'){
				ctr++;
				a[3] = '@';
			}
		}

		for(int i=2;i<len;i++){

			if(a[i] == 'B'){

				if(i==len-2){
					if(a[i-1] == 'W'){
						ctr++;
						a[i-1] = '@';
					}

					if(a[i-2] == 'W'){
						ctr++;
						a[i-2] = '@';
					}

					if(a[i+1] == 'W'){
						ctr++;
						a[i+1] = '@';
					}
				}

				else if(i == len-1){

					if(a[i-1] == 'W'){
						ctr++;
						a[i-1] = '@';
					}

					if(a[i-2] == 'W'){
						ctr++;
						a[i-2] = '@';
					}
				}
				else{
					if(a[i-1] == 'W'){
						ctr++;
						a[i-1] = '@';
					}

					if(a[i-2] == 'W'){
						ctr++;
						a[i-2] = '@';
					}

					if(a[i+1] == 'W'){
						ctr++;
						a[i+1] = '@';
					}

					if(a[i+2] == 'W'){
						ctr++;
						a[i+2] = '@';
					}
				}
			}
		}

		cout<<ctr<<endl;
	}

	return 0;
}

