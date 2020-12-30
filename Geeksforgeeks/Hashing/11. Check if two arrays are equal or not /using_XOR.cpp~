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


bool check(vector<ll> arr1, vector<ll> arr2, int n) {
    
     //using XOR but not work in corrner case
    //  arr1    3 3
    //  arr2    2 2
    int b1 = arr1[0];
    int b2 = arr2[0];
     
    for (int i = 1; i < n; i++) {
        b1 ^= arr1[i];
    }
 
    for (int i = 1; i < n; i++) {
        b2 ^= arr2[i];
    }
    int all_xor = b1 ^ b2;
     
    if (all_xor == 0)
        return true;
     
    return false;
    
}
