#include <bits/stdc++.h>
using namespace std;

//User function template for C++
class Solution{
public:	
	int print2largest(int arr[], int arr_size) {
	    int largest =-1, second = -1; 
	    // find the largest element 
                for (int i = 0; i < arr_size; i++) { 
                  largest = max(largest, arr[i]); 
                } 
        // find the second largest element 
        for (int i = 0; i < arr_size; i++) { 
                if (arr[i] != largest) 
                    second = max(second, arr[i]); 
                } 
                return second;
	}
};


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
