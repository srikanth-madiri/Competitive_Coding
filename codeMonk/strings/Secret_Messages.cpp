/*

   X and Y are best friends and they love to chat with each other. But their recent concerns about the privacy of their messages has distant them. So they decided to encrypt their messages with a key, K, such that the character of their messages are now shifted K times towards right of their initial value. Their techniques only convert numbers and alphabets while leaving special characters as it is.

   Provided the value K you are required to encrypt the messages using their idea of encryption.

   INPUT FORMAT

   The first line of the input contains, T, the number of messages. The next line contains N, and K, no of characters in the message and key for encryption. The next line contains the message.

   OUTPUT FORMAT

   Output the encrypted messages on a new line for all the test cases.

   CONSTRAINS




   SAMPLE INPUT 
   2
   12 4
   Hello-World!
   16 50
   Aarambh@1800-hrs
   SAMPLE OUTPUT 
   Lipps-Asvph!
   Yypykzf@1800-fpq

 */


#include<bits/stdc++.h>

using namespace std;

int main(){

	int t,n,k,len;
	cin>>t;

	while(t--){
		string a;
		string res="";
		cin>>n>>k;
		cin>>a;
		len=a.length();

		for(int i=0;i<len;i++){

			if(isalpha(a[i])){

				if(isupper(a[i])){

					res += (((a[i]-65)+k)%26)+65;
				}

				else if(islower(a[i])){

					res += (((a[i]-97) + k)%26)+97;
				}
			}
			else if(isdigit(a[i]))

				res += (((a[i]-48)+k)%10)+48;

			else

				res += a[i]; 
		}
		cout<<res<<endl;
	}

	return 0;
}

