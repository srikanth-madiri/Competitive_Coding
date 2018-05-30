/*#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll i,n,q,x,y,z;
    cin>>n;
    vector<ll> v(n);
    for(i=0;i<n;i++)
    	cin>>v[i];
    cin>>q;
    while(q--){
    	cin>>x;
    	y = 0;
    	z = 0;
    	for(i=0;i<n;i++){
    		if(v[i] <= x){
    			y++;
    			z += v[i];
    		}
    	}
    	cout<<y<<" "<<z<<endl;
    }
    return 0;
}*/


#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int n,i;
    cin>>n;
    int a[n];
    
    for(i=0;i<n;i++){
     
        cin>>a[i];
    }
    
    int q;
    cin>>q;
    while(q--){
        int sum=0,index=0,search;
        cin>>search;
        for(i=0;i<n;i++){
            
            if(a[i] <= search){
                
                index++;
                sum += a[i];
            } 
        }
        cout<<index<<" "<<sum<<"\n";
    } 
   return 0;
}
