/*Cool boy goes to buy soap from a shop.The shop contains N soaps. The prices of soap are given in the form of an array A. The price of ith soap is A[i]. Now cool boy has q queries, in each query he wants to know the number of soaps that have price less than the given amount M.

Input:

First line contains integer N total number of soaps available in the shop.

Second line contains N space separated integers.

Third line contains Q number of queries.

Each of the next Q lines contain integer M.

Output:

For each query output number of soaps having price less than M for that query.

*/

/*
#include <bits/stdc++.h>

using namespace std;

int main()
{
        //ios_base::sync_with_stdio(0);
        //cin.tie(0);

        int n,i;
        cin >>n;
        vector<int> v;
        int m;
        for(i=0;i<n;i++)
        {
                cin >>m;
                v.push_back(m);
        }
        sort(v.begin(),v.end());

        int t;
        cin >>t;
        int value;
        while(t--){
                cin >>value;
                int f = lower_bound(v.begin(), v.end(), value) - v.begin();
                cout <<f<< "\n"; 
        }

        return 0;
}
*/


#include<bits/stdc++.h>

using namespace std;

int main(){

	int n,i;
	cin>>n;
	int a[n];

	for(i=0;i<n;i++)
		cin>>a[i];
    	sort(a, a+n);

	int no_quiries;
	cin>>no_quiries;
	
	while(no_quiries--){

		int value, count=0;
		cin>>value;
		if(value<=a[0])	
			cout<<0<<"\n";
		
		else if(value>a[n-1])
			cout<<n<<"\n";

		else if(value==a[n-1])
			cout<<n-1<<"\n";
		
		else{
			for(i=0;i<n;i++){
				if(a[i]<value)
					count++;
				else{
					cout<<count<<"\n";
					break;
				}

			}
		}

	}
	return 0;
}
