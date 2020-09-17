/*
Provided an array Arr of N integers, you need to reverse a subarray of that array. The range of this subarray is given by L and R.

Example 1:

Input:
N = 7
Arr[] = {1, 2, 3, 4, 5, 6, 7}
L = 2, R = 4
Output:
1 4 3 2 5 6 7
Explanation: After reversing the elements 
in range 2 to 4 (2, 3, 4), 
modified array is 1, 4, 3, 2, 5, 6, 7.

Your Task:  
You don't need to read input or print anything. Your task is to complete the function reverseSubArray() which takes the array of integers arr, n, l and r as parameters and returns void. You need to change the array itself.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

//User function template for C++
class Solution{
public:	
	void reverseSubArray(int a[], int n, int l, int r) {
	 while(l<r) {
	     swap(a[l-1],a[r-1]);
	     l++;
	     r--;
	 }   
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> l >> r;
        Solution ob;
        ob.reverseSubArray(arr, n, l, r);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
