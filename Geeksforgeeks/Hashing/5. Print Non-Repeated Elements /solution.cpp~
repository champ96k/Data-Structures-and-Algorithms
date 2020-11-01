// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> printNonRepeated(int arr[],int n);


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    vector<int> v;
	    v = printNonRepeated(arr,n);
	    
	    for(int i=0;i<v.size();i++)  
	        cout<<v[i]<<" ";
	    
	    cout<<endl;
	    
	}
	return 0;
}

// } Driver Code Ends


// Function to print the non repeated elements in the array
// arr[]: input array
// n: size of array
vector<int> printNonRepeated(int arr[],int n)
{
    //Your code here
    vector<int>v;
    unordered_map<int, int> mp; 
    for (int i = 0; i < n; i++) 
        mp[arr[i]]++; 
  
    for (int i = 0; i < n; i++) 
        if (mp[arr[i]] == 1) 
            v.push_back(arr[i]);
            
    return v; 
  
}
