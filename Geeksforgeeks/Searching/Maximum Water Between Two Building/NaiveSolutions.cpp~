// { Driver Code Starts
//Initial Template for C++


// C++ implementation of the approach 
#include<bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends


//User function Template for C++


// Return the maximum water that can be stored 
int maxWater(int height[], int n) 
{ 
    int maximum = 0; 
  
    // Check all possible pairs of buildings 
    for (int i = 0; i < n - 1; i++) { 
        for (int j = i + 1; j < n; j++) { 
            int current = (min(height[i], 
                               height[j]) 
                           * (j - i - 1)); 
  
            // Maximum so far 
            maximum = max(maximum, current); 
        } 
    } 
    return maximum; 
} 





// { Driver Code Starts.

// Driver code 
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int height[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>height[i];
        }
        
        cout<<(maxWater(height, n))<<endl;
    }

	 
} 

  // } Driver Code Ends
