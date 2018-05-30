#include<bits/stdc++.h>

using namespace std;

int main(){
	
	string s;
	int i,flag=0;
	char var;
	cin>>s;
	stack<char> a;
	cout<<s.length()<<"\n";
	for(i=0;i<s.length();i++){

		if(s[i] == '(' || s[i] == '{' || s[i] == '['){
			a.push(s[i]);
		}
		else{

			switch(s[i]){

				case ')' : if(a.empty()){
					   	flag=1;
						break;
					   }
					   else{
					   	var = a.top();
					   	a.pop();
					   	if(var == '{' || var == '['){
							flag=1;
							break;
						}
					   }
					   break;
				
				case '}' : 
					   if(a.empty()){
					   	flag=1;
					   	break;
					   }
					   else{
					   	var = a.top();
					   	a.pop();
					   	if(var == '[' || var == '('){
							flag=1;
							break;
						}
					   }
					   break;

				case ']' : 
					   if(a.empty()){
					   	flag=1;
					   	break;
					   }
					   else{
					   	var = a.top();
						a.pop();
					   	if(var == '{' || var == '('){
							flag=1;
							break;
						}
					   }
					   break;
			}
		}
	}

	if(a.empty() && flag == 0)
		cout<<"Balanced\n";
	else
		cout<<"Not Balanced\n";
	

	return 0;
}
