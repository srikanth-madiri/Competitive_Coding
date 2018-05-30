/*

   David has invited his girlfriend Patricia to the cinema to watch the latest film by Ciro Guerra, after a long time they have agreed to watch the 7 PM movie. When David prepares to pay, he realizes that the serial number of the ticket is a capicúa number for which he decides not to use it and finally Patricia must pay the cinema.

   A capicúa number refers to any number that is read equally from left to right.

   For this problem it is required to verify if a number is capiculate.

   Entry

   TTN

   Departure

   TLines must be printed , on each line you should print "YES" if the number is capicúa or "NO" otherwise, all without quotes.

   SAMPLE INPUT 
   5
   11111
   8785878
   51875
   224614
   547745
   SAMPLE OUTPUT 
   AND IT IS
   AND IT IS
   DO NOT
   DO NOT
   AND IT IS

 */


#include<bits/stdc++.h>

using namespace std;

int main(){

	int n;
	cin>>n;
	string a;

	while(n--){
		int flag=1;
		cin>>a;
		int len = a.length();
		for(int i=0;i<len;i++){

			if(a[i] != a[len-i-1]){
				flag = 0;
				break;
			}
		}
		if(flag)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;

	}

	return 0;
}

