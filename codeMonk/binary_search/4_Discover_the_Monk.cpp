#include<bits/stdc++.h>

using namespace std;

int main(){

        //ios_base::sync_with_stdio(0);
        //cin.tie(0);
	
	int n, i, t, m;
	cin>>n;
	vector<int> a;
	cin>>t;
	for(i=0;i<n;i++){
		cin>>m;
		a.push_back(m);
	}
	
	while(t--){

		int value;
		cin>>value;
		if(find(a.begin(), a.end(), value) != a.end())
			printf("YES\n");
		else
			printf("NO\n");

	}

	return 0;

}
