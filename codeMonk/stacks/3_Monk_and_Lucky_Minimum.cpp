/*Monk just purchased an array A having N integers. Monk is very superstitious. He calls the array A Lucky if the frequency of the minimum element is odd, otherwise he considers it Unlucky. Help Monk in finding out if the array is Lucky or not.

Input:
First line consists of a single integer T denoting the number of test cases.
First line of each test case consists of a single integer N denoting the size of array A.
Second line of each test case consists of N space separated integers denoting the array A.

Output:
For each test case, print "Lucky" (without quotes) if frequency of minimum element is odd, otherwise print "Unlucky"(without quotes). Print a new line after each test case.

SAMPLE INPUT 
2
5
8 8 9 5 9
5
3 3 3 5 3
SAMPLE OUTPUT 
Lucky
Unlucky

*/


#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n, i;
	cin>>n;
	while(n--){
		stack<int> a;
		int size,count=0;
		cin>>size;
		int arr[size];

		for(i=0;i<size;i++)
			cin>>arr[i];

		a.push(arr[0]);
		count=1;
		
		for(i=1;i<size;i++){
			
			if(arr[i] == a.top()){
				count++;

			}

			if(arr[i] < a.top()){
				a.pop();
				a.push(arr[i]);
				count=1;
			}

		}
	
		if(count % 2 == 0)
			cout<<"Unlucky\n";
		else
			cout<<"Lucky\n";
		count=0;
	}

	return 0;
}
