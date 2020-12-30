// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>

using namespace std;
#define ll long long 

bool check(vector<ll> , vector<ll> , int );

int main()
 {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        
        vector<ll> arr(n,0),brr(n,0);
        
        // increase the count of elements in first array
        for(ll i=0;i<n;i++)
            cin >> arr[i];
        
        
        // iterate through another array
        // and decrement the count of elements
        // in the map in which frequency of elements
        // is stored for first array
        for(ll i=0;i<n;i++)
            cin >> brr[i];
        
        cout << check(arr,brr,n) << "\n";
    }
	return 0;
}// } Driver Code Ends


bool check(vector<ll> arr, vector<ll> brr, int n) {
    
    //Time: 0(n)
    //Space: 0(n)
    
    unordered_map<int,int>m;
    
    for(int i=0;i<n;i++){
       m[arr[i]]++;
    }
    
    for(int i=0;i<n;i++){
        
        if(m.find(brr[i])==m.end())
        return false;
        
        if(m[brr[i]]==0)
        return false;
        
        m[brr[i]]--;
    }
    return true;
}
