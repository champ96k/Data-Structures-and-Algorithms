// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++

class Solution{   
public:
    int getPairsCount(int a[], int n, int k) {
        // code here
        int low=0,high=n-1,count=0;
        
        while(low<high) {
            
            if(a[low]+a[high]==k){
                count++;
            }
            
            else if(a[low]+a[high]>k) {
                high--;
            } else {
                low++;
            }
        }
        return count;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
