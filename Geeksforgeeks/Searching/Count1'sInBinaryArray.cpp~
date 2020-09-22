/*
Given a binary sorted non-increasing array of 1s and 0s. You need to print the count of 1s in the binary array.

Example 1:

Input:
N = 8
arr[] = {1,1,1,1,1,0,0,0}
Output: 5
Explanation: Number of 1's in given 
binary array : 1 1 1 1 1 0 0 0 is 5.

Your Task:
The task is to complete the function countOne() which takes the array arr[] and its size N as inputs and returns the count of 1s in the input array.


Second Method : Using binary Search
Time Complexity: O(LogN).
Auxiliary Space: O(1).

*/

#include <bits/stdc++.h>
using namespace std;

// Function to count number of Ones
// arr: input array 
// N: size of input array
int countOnes(int arr[], int N)
{
    // Your code here
    int count=0;
    for(int i=0;i<N;i++) {
        if(arr[i]==1)
            count++;
    }
    return count;
    
}

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        int *arr = new int[n]; 
        for(int i = 0; i < n; i++)
            cin>>arr[i];
        
        cout <<countOnes(arr, n)<<endl;
    }
    return 0;
}
