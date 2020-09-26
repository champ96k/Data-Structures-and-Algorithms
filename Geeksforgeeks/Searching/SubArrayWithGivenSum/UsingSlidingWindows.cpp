// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find the subarray with given sum k
// arr: input array
// n: size of array
vector<int> subarraySum(int arr[], int n, int sum){
    
    // Your code here
    vector<int>v;
    
    int curr_sum = arr[0], start = 0, i; 
  
    for (i = 1; i <= n; i++) { 
        while (curr_sum > sum && start < i - 1) { 
            curr_sum = curr_sum - arr[start]; 
            start++; 
        } 
  
        if (curr_sum == sum) { 
                 v.push_back(start+1);
                 v.push_back(i);
                return v;
        } 
  
        if (i < n) 
            curr_sum = curr_sum + arr[i]; 
    }
    v.push_back(-1);
    return v;
}

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        vector<int>res;
        res = subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
