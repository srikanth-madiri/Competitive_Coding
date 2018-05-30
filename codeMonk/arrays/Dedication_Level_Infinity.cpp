/*

   A simple question again..!

   These are the people from nirmaLand who have shown utmost dedication towards Competitve Programming..!

   You will be provided with name of the coder and no. of hours he/she spent on coding.

   You need to output top 3 names of the coders who spent most time in coding.

Note: Time (no. of hours) given for all coders will be unique. More technically, no two coders will have same amount of time.

See the sample case for better understanding.


Input format:

First line consist of total number of coders, let's say 'n'.

Each of the next n lines consist of a string, let's say 'N' (name of coder) and a number let's say, 'T' (time).



Output format:

Output names of top 3 coders that spent maximum time in coding.


Constraints:

3 <= n <= 100

1 <= |N| <= 10

1 <= T <= 1000

SAMPLE INPUT 
7
Darshan 78
Harshad 90
Jaimin 87
Nirav 88
Hardik 1
Fenil 70
Lovlin 5
SAMPLE OUTPUT 
Harshad
Nirav
Jaimin

 */



#include<bits/stdc++.h>

using namespace std;

int main(){

	int n,hrs;
	string name;
	cin>>n;
	int arr[n];

	map<int, string> a;

	for(int i=0;i<n;i++){
		cin>>name>>hrs;
		arr[i] = hrs;

		a.insert(pair <int, string> (hrs, name));
	}

	int len=sizeof(arr)/sizeof(arr[0]);

	sort(arr, arr+len, greater<int>());

	cout<<a[arr[0]]<<endl;
	cout<<a[arr[1]]<<endl;
	cout<<a[arr[2]]<<endl;

	return 0;
}

