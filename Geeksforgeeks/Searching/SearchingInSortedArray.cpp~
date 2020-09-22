/*
Given a sorted array and an integer element. The task is to check if the element is present in the array or not.

Example 1:

Input:
N = 5, K = 6
arr[] = {1,2,3,4,6}
Output: 1
Exlpanation: Since, 6 is present in 
the array at index 4 (0-based indexing),
so output is 1.
Example 2:

Input:
N = 5, K = 2
arr[] = {1,3,4,5,6}
Output: -1
Exlpanation: Since, 2 is not present 
in the array, so output is -1.
Your Task:
The task is to complete the function searchInSorted() which takes the sorted array arr[], its size N and the element K as inputs and returns 1 if the element is present in the array, else it returns -1. 

Expected Time Complexity: O(Log N).
Expected Auxiliary Space: O(1). 
*/

#include <bits/stdc++.h> 
using namespace std;

// Function to find element in sorted array
// arr: input array
// N: size of array
// K: element to be searche
int searchInSorted(int a[], int N, int K) 
{ 

   // Your code here
   int low = 0,high = N-1;
   while(low<=high) {
       int mid = (low+high)/2;
       if(a[mid]==K)
       return 1;
       
       if(a[mid]>K)
       high = mid-1;
       
       else 
       low = mid+1;
   }
   return -1;
}

int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        cout << searchInSorted(arr, n, k) << endl;

    }

	return 0; 
} 
