/*

   Prashant started to attend programming lessons. On the first lesson his task was to write a simple program. The program was supposed to do the following: in the given string, consisting if uppercase and lowercase Latin letters, it:

   deletes all the vowels,
   inserts a character "." before each consonant,
   replaces all uppercase consonants with corresponding lowercase ones.
   Vowels are letters "A", "O", "Y", "E", "U", "I", and the rest are consonants. The program's input is exactly one string, it should return the output as a single string, resulting after the program's processing the initial string.

   Help Prashant cope with this easy task.

   Input First line of input contains an integer T number of test cases. The next T line represents input string of Prashant's program. This string only consists of uppercase and lowercase Latin letters and its length is from 1 to 100, inclusive.

   Output Print the resulting string. It is guaranteed that this string is not empty.

   SAMPLE INPUT 
   1
   odn
   SAMPLE OUTPUT 
   .d.n


 */

#include<bits/stdc++.h>

using namespace std;

int main(){

	int n,len;
	string a;
	cin>>n;

	while(n--){

		cin>>a;
		len = a.length();

		for(int i=0;i<len;i++){

			if(a[i] == 'a' || a[i] == 'A' || a[i] == 'o' || a[i] == 'O' || a[i] == 'y' || a[i] == 'Y' || a[i] == 'e' || a[i] == 'E' || a[i] == 'U' || a[i] == 'u' || a[i] == 'I' || a[i] == 'i'){

				;
			}

			else if(a[i] <= 90){
				a[i] +=32;
				cout<<"."<<a[i];
			}

			else
				cout<<"."<<a[i];
		}
		cout<<endl;
	}

	return 0;
}

