/*
Sherlock and Numbers
Watson gives to Sherlock a bag of numbers [1, 2, 3 ... N] and then he removes K numbers A1, A2 ... AK from the bag. He now asks Sherlock to find the P'th smallest number in the bag.

Input
First line contains T, the number of test cases. Each test case consists of N, K and P followed by K integers in next line denoting the array A.

Output
For each test case, print P'th smallest number in the bag. If no such number exists output -1.*/




#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    while(n--){
    
        int N,K,P,i;
        vector<int> a;

        cin>>N;
        for(i=0;i<N;i++)
            a.push_back(i+1);
    
        cin>>K;
        int b[K];
        cin>>P;
    
        for(i=0;i<K;i++){
    
            cin>>b[i];
        }
    
        for(i=0;i<K;i++){
    
           a.erase(remove(a.begin(), a.end(), b[i]), a.end());
        }

        if(P<=a.size())
                cout<<a[P-1]<<"\n";
        else
                cout<<-1<<"\n";
    }   
    return 0;
}
