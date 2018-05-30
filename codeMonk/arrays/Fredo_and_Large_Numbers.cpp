/*

   Fredo is pretty good at dealing large numbers. So, once his friend Zeus gave him an array of N numbers , followed by Q queries which he has to answer. In each query , he defines the type of the query and the number f for which Fredo has to answer. Each query is of the following two types:
   Type 0: For this query, Fredo has to answer the first number in the array (starting from index 0) such that its frequency is atleast equal to f.
   Type 1: For this query, Fredo has to answer the first number in the array such that frequecy is exactly equal to f.
   Now, Fredo answers all his queries but now Zeus imagines how he should verify them . So, he asks you to write a code for the same.
Note: If there is no number which is the answer to the query, output 0.
Use fast I/O.

Input :
The first line of the input contains N , the size of the array
The next line contains N space separated integers.
The next line contains Q, denoting the number of queries.
Then follow Q lines, each line having two integers type and f, denoting the type of query and the frequency for which you have to answer the query.

Output:
You have to print the answer for each query in a separate line.

Input Constraints:






SAMPLE INPUT 
6
1 2 2 1 2 3
5
0 1
0 2
1 2
1 3
0 3
SAMPLE OUTPUT 
1
1
1
2
2

 */

#include<bits/stdc++.h>

using namespace std;

int main(){

	int n,t,opt,f;
	cin>>n;
	int a[n];

	for(int i=0;i<n;i++)
		cin>>a[i];

	cin>>t;
	while(t--){
		int flag = 0;
		int count[n]={0};
		cin>>opt>>f;
		if(opt == 0){

			for(int i=0;i<n;i++){

				for(int j=0;j<n;j++){

					if(a[i] == a[j])
						count[i]++;
				}
			}
			for(int i=0;i<n;i++){
				if(count[i] >= f){
					cout<<a[i]<<endl;
					flag = 1;
					break;
				}
				else
					continue;
			}
			if(flag == 0)
				cout<<0<<endl;
		}
		else{

			for(int i=0;i<n;i++){

				for(int j=0;j<n;j++){

					if(a[i] == a[j])
						count[i]++;
				}
			}
			for(int i=0;i<n;i++){
				if(count[i] == f){
					cout<<a[i]<<endl;
					flag = 1;
					break;
				}
				else
					continue;
			}
			if(flag == 0)
				cout<<0<<endl;
		}

	}

	return 0;
}

