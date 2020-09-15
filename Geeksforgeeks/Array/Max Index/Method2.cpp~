// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find the maximum difference of j-i
// arr[]: input array
// n: size of array
int maxIndexDiff(int a[], int n) 
{ 
    
    // Your code here
    int j=n-1;
    int i=0;
    int res=0;
    while(i<=j) {
        if(a[i]<=a[j]) { 
          int z = j-i;
          res = max(res,z);
           i++;
           j=n-1;
        } else {
          j--;
        }
         
    }
    return res;
    
    
}

// { Driver Code Starts.
  
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
