/*Given an array of positive and negative integers, denoting different types of parentheses. The positive numbers  denotes opening parentheses of type  and negative number denotes closing parentheses of type .

Open parentheses must be closed by the same type of parentheses. Open parentheses must be closed in the correct order, i.e., never close an open pair before its inner pair is closed (if it has an inner pair). Thus,  is balanced, while  is not balanced.

You have to find out the length of the longest subarray that is balanced.

Input Format:
First line contains an input N , denoting the number of parentheses. Second line contains N space separated integers.   denoting the  parentheses of the array.

Output Format:
Print the length of the longest subarray that is balanced.

SAMPLE INPUT 
5
1 -1 2 3 -2
SAMPLE OUTPUT 
2
*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int n, count=0, i, res=0, top=0;
    cin>>n;
    
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    
    stack<int> b;
    
    for(i=0;i<n;i++){
        
        if(a[i]>0){
            b.push(a[i]);
//            count = 0;
        }
        else{
            
            if(b.empty()){
                //cout<<0<<"\n";
                count = 0;
            }
            
            else{
                
                top = b.top();
                if(top == -a[i]){
		    b.pop();
                    count = count+2;
                    if(count > res)
                        res = count;
                }
                else{
		    b.pop();
                    count = 0;
		}
                
            
            }
            
    	}
  }
	cout<<res<<"\n";
    
    return 0;
}
