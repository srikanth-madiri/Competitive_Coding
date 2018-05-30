/*#include<bits/stdc++.h>

  using namespace std;

  unsigned long long f = 1;
  const unsigned int M = 1000000007;

  int main(){

  int n;
  cin>>n;
  int a[n];

  for(int i=0;i<n;i++){
  cin>>a[i];
  f = (f*a[i]) % M;            
  }

  cout<<f<<"\n";



  return 0;
  }*/

/*#include<bits/stdc++.h>

  using namespace std;

  int main(){
  int n;
  cin>>n;
  unsigned long long ans=1;
  for(int i=n;i>=1;i--)
  ans *= i; 
  cout<<ans;   

  return 0;
  } */

/*
#include<bits/stdc++.h>

using namespace std;

int main(){

string a;
cin>>a;

char *start=&a[0], *end=&a[a.length()-1];
int len = a.length()/2;
while(len--){
if(!(*start == *end)){

cout<<"NO\n";
exit(0);
}

}
cout<<"YES\n";    

return 0;
}*/

/*
#include<bits/stdc++.h>

using namespace std;

int main(){

int n,a,b;
cin>>n;

while(n--){

cin>>a;
cin>>b;

if(b % a == 0)
cout<<"Yes\n";
else
cout<<"No\n";
}
return 0;

}*/

/*
#include<bits/stdc++.h>

using namespace std;

int main(){

int n,i;
unsigned long long a=0, b=0, c=0;
cin>>n;
int arr[n];

for(i=0;i<n;i++)
cin>>arr[i];

for(i=0;i<n;i=i+3)
a += arr[i];
for(i=1;i<n;i=i+3)
b += arr[i];
for(i=2;i<n;i=i+3)
c += arr[i];

cout<<a<<" "<<b<<" "<<c<<" \n";
return 0;

}*/


/*
#include<bits/stdc++.h>

using namespace std;

int main(){

int i,n,t,ch,x,y,l,r;
cin>>n;
cin>>t;
int a[n];

for(i=0;i<n;i++)
cin>>a[i];

while(t--){

int sum=0;
cin>>ch;

if(ch == 1){
cin>>x;
cin>>y;
if(x<n)
a[x]=y;
else
cout<<-1<<"\n";
}

else{
cin>>l;
cin>>r;
if(l<n && l>=0 && r<n && r>=0 && l<r)
for(i=l;i<=r;i++)
sum += a[i];
cout<<sum<<"\n";        
}
}

return 0;

}*/



#include<bits/stdc++.h>

using namespace std;

int main(){

	int n,i,min=0, max=0;
	cin>>n;
	int a[n];

	cin>>a[0];
	min = a[0];
	max = a[0];

	for(i=1;i<n;i++){
		cin>>a[i];
		if(a[i]<min)
			min = a[i];
		if(a[i]>max)
			max = a[i];

	}
	//  cout<<min<<"\n";
	//  cout<<max<<"\n";
	int count=0;
	for(int i=min; i<max; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(a[j]==i)
			{
				count++;
				break;
			}
			else
			{
				continue;
			}
		}
	}

	int no_of_ele=max-min;
	if(no_of_ele == count)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}
