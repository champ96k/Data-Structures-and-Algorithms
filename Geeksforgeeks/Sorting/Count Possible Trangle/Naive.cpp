// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

    int findNumberOfTriangles(int arr[], int n)
    {
        // code here
        int count = 0; 
  
    
    for (int i = 0; i < n; i++) { 
        for (int j = i + 1; j < n; j++) { 
  
            for (int k = j + 1; k < n; k++) 
  
                // Sum of two sides is greater 
                // than the third 
                if (arr[i] + arr[j] > arr[k] && arr[i] + arr[k] > arr[j] && arr[k] + arr[j] > arr[i]) 
                    count++; 
        } 
    } 
    return count; 
    }



int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        
        cout<<findNumberOfTriangles(arr,n) <<endl;
    }
    return 0;
}  // } Driver Code Ends
