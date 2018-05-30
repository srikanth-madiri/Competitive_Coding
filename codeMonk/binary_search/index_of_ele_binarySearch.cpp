#include<bits/stdc++.h>

using namespace std;

int binarySearch(int low,int high,int key,int *a)
{
   while(low<=high)
   {
     int mid=(low+high)/2;
     if(a[mid]<key)
     {
         low=mid+1;
     }
     else if(a[mid]>key)
     {
         high=mid-1;
     }
     else
     {
         return mid;
     }
   }
   return -1;                //key not found
 }


int main(){
    
    int n,i;
    cin>>n;
    
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    
    int size = sizeof(a)/sizeof(a[0]);
    sort(a, size);
    
    int no_quiries;
    cin>>no_quiries;
    
    while(no_quiries--){
        
        int search;
        cin>>search;
        int index = binarySearch(0, n, search,a);
        cout<<index<<"\n";
    }
    return 0;
}
