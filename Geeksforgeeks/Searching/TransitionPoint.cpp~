/*
You are given a sorted array containing only numbers 0 and 1. Find the transition point efficiently. The transition point is a point where "0" ends and "1" begins (0 based indexing).
Note that, if there is no "1" exists, print -1.
Note that, in case of all 1s print 0.

Example 1:

Input:
N = 5
C[] = {0,0,0,1,1}
Output: 3
Explanation: position 3 is 0 and next
one is 1, so answer is 3.
Example 2:

Input:
N = 4
C[] = {0,0,0,0}
Output: -1
Explanation: Since, there is no "1",so
the answer is -1.
Your Task:
The task is to complete the function transitionPoint() that takes array and N as input and returns the value of the position where "0" ends and "1" begins.

Expected Time Complexity: O(LogN).
Expected Auxiliary Space: O(1).
*/

#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}// } Driver Code Ends


// Function to find the transition point
int transitionPoint(int a[], int n) {
    // code here
    if(a[0]==1) 
        return 0;
    if(a[n-1]==0) 
        return -1;
    int low=0,high=n-1;
    while(low<=high) {
        int mid=(low+high)/2;
        if(a[mid]==0) {
            if(a[mid]!=a[mid+1])
            return mid+1;
            else
             low = mid+1;
        } else {
            high = mid-1;
        }
    }
    return -1;
}
