/*Micro just purchased a queue and wants to perform N operations on the queue. The operations are of following type:

 : Enqueue x in the queue and print the new size of the queue.
D : Dequeue from the queue and print the element that is deleted and the new size of the queue separated by space. If there is no element in the queue then print 1 in place of deleted element.

Since Micro is new with queue data structure, he need your help.

Input:
First line consists of a single integer denoting N
Each of the following N lines contain one of the operation as described above.

Output:
For each enqueue operation print the new size of the queue. And for each dequeue operation print two integers, deleted element (1, if queue is empty) and the new size of the queue.

SAMPLE INPUT 
5
E 2
D
D
E 3
D
SAMPLE OUTPUT 
1
2 0
-1 0
1
3 0
*/


#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    queue <int> a;
    
    while(n--){
        char oper;
        cin>>oper;
        if(oper == 'E'){
            
            int value;
            cin>>value;
            
            a.push(value);
            cout<<a.size()<<"\n";
        }
        else{
		if(a.empty())
			cout<<-1<<" "<<a.size()<<"\n"; 
	   
		else{
            		cout<<a.front()<<" ";
            		a.pop();
            		cout<<a.size()<<"\n";
		}
        }
        
    }
    return 0;
}

