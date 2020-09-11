/*
Given an array Arr of size N with all elements greater than or equal to zero. Return the maximum product of two numbers possible.

Example 1:

Input: 
N = 6
Arr[] = {1, 4, 3, 6, 7, 0}  
Output: 42
Example 2:

Input: 
N = 5
Arr = {1, 100, 42, 4, 23}
Output: 4200
Your Task:  
You don't need to read input or print anything. Your task is to complete the function maxProduct() which takes the array of integers arr[] and n as parameters and returns an integer denoting the answer.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:

	int maxProduct(int a[], int n) {
	    // code here
	    sort(a,a+n);
	    int res = ((a[n-1])*(a[n-2]));
	   // cout<<"Result: "<<res<<endl;
	    return res;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
