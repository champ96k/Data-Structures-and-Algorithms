#include<bits/stdc++.h>
using namespace std;

// Function to find the maximum difference of j-i
// arr[]: input array
// n: size of array
int maxIndexDiff(int a[], int n) 
{ 
    
    // Your code here
    int res=0;
    for(int i=0;i<n;i++) {
        for(int j=i;j<n-1;j++) {
            if(a[i]<=a[j+1])
              res = max(res,(j+1)-i);
        }
    }
    
    return res;
    
}
/* Driver program to test above functions */
int main() 
{
    int T;
    cin>>T;
    while(T--){
        int num;
        cin>>num;
        int arr[num];
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        
        if(num ==1 ){
            cout<<0<<endl;
            continue;
        }
        cout<<maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
}   // } Driver Code Ends
