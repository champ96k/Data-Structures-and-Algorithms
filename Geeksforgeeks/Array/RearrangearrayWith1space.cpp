/*
Given an array arr[] of size N where every element is in the range from 0 to n-1. Rearrange the given array so that arr[i] becomes arr[arr[i]].

Example 1:

Input:
N = 2
arr[] = {1,0}
Output: 0 1
Explanation: arr[0] = 1 and arr[arr[0]]
= 0.Also, arr[1] = 0 and arr[arr[1]] = 1.
So, rearranging elements, we get array 
as, 0 1.

Your Task:
The task is to complete the function arrange() which arranges the elements in the array. The printing is done automatically done by the driver code.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).
*/

#include<bits/stdc++.h>
using namespace std;
    
// Function to rarrange the elements in O(1) extra space
// arr: input array
// n: size of array
void arrange(long long arr[], int n) {
    // Your code here
    int b[n];
    for(int i = 0; i < n; i++)
     b[i] = arr[i];
     
    for(int i = 0; i < n; i++)
      arr[i] = b[b[i]];
    
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        arrange(A, n);
        for(int i=0;i<n;i++){
            cout << A[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
