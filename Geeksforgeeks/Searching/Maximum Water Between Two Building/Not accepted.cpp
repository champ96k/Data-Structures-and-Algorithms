//using two pointer approch

// C++ implementation of the approach 
#include<bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends


//User function Template for C++


// Return the maximum water that can be stored 
int maxWater(int arr[], int n) 
{ 
   
    int res;
    int count=0;
    int low=0;
    int high=n-1;
    while(low<=high)
        {
            count=min(arr[low],arr[high])*(high-low-1);
            
                if(arr[low]>=arr[high])
                    high--;
                else
                    low++;
                    
                    
                    res=max(res,count);
                    
    }
    return res;

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
