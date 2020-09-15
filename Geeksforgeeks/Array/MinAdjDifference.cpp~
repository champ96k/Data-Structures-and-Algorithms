/*
Given an array Arr of N integers arranged in a circular fashion. Your task is to find the minimum absolute difference between adjacent elements.

Example 1:

Input:
N = 7
Arr[] = {8,-8,9,-9,10,-11,12}
Output: 4
Explanation: The absolute difference 
between adjacent elements in the given 
array are as such: 16 17 18  19 21 23 4
(first and last). Among the calculated 
absolute difference the minimum is 4.

Your Task:
The task is to complete the function minAdjDiff() which returns the minimum difference between adjacent elements in circular array.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).
*/

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find minimum adjacent difference
// arr[]: input array
// n: size of array
int minAdjDiff(int a[], int n){    
    // Your code here
    int min1 = abs(a[n-1]-a[0]);
    for(int i=1;i<n;i++) {
        min1 = min(min1,abs(a[i-1]-a[i]));
    }
    return min1;
}

// { Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin>>t; //Input testcases
    
    while(t--) //While testcases exist
    {
        int n;
        cin>>n; //Input size of array
        
        int arr[n]; //Array of size n
        
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i]; //input elements of array
        }
        
        cout << minAdjDiff(arr, n) << endl;
    }
    return 0;
}  // } Driver Code Ends
