#include"bits/stdc++.h"

using namespace std;

int main(){
	
	int n;
	cin>>n;
	while(n--){
		
		string str;
		int i,j,count=0;
		cin>>str;
		string vow = "aeiouAEIOU";
		for(i=0;i<str.length();i++)
			
			for(j=0;j<vow.length();j++)
				
				if(str[i] == vow[j]){
					
					count++;
					break;
				}

		cout<<count<<"\n";
	}

	return 0;
}
