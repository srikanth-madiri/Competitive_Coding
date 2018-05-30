#include"bits/stdc++.h"

using namespace std;

int reverse(int num){

	int reverse=0, mod=0;
	
	while(num!=0){
		
		mod = num % 10;
		reverse = (reverse * 10) + mod;
		num = num/10;
	
	}
	return reverse;
}


int main(){
		
	int n,result;
	cin>>n;
	while(n--){
	
		int a,b;
		cin>>a;
		cin>>b;

		a = reverse(a);
		b = reverse(b);
		result = reverse(a + b);
		cout<<result<<"\n";
		
	}

	return 0;
}
