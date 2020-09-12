// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


   

// function to find the trapped water in between buildings
// arr: input array
// n: size of array
int trappingWater(int a[], int n){

    // Your code here
    
    //for left side
    int res=0;
    int lmax[n];
    int rmax[n];
    lmax[0] = a[0];
    for(int i=1;i<n;i++) {
        lmax[i] = max(a[i],lmax[i-1]);
    }
    
    
    rmax[n-1] = a[n-1];
        for(int i=n-2;i>=0;i--) {
        rmax[i] = max(a[i],rmax[i+1]);
    }
    
    for(int i=1;i<n-1;i++) {
        res = res + ((min(lmax[i], rmax[i])) + -a[i]);
    }
    return res;

    
    
}

// { Driver Code Starts.

int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        
        cin >> n;
        
        int a[n];
        
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        
        cout << trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends
