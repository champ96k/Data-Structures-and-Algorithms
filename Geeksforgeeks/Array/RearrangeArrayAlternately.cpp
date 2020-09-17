/*
Given a sorted array of positive integers. Your task is to rearrange  the array elements alternatively i.e first element should be max value, second should be min value, third should be second max, fourth should be second min and so on.

Example 1:

Input:
N = 6
arr[] = {1,2,3,4,5,6}
Output: 6 1 5 2 4 3
Explanation: Max element = 6, min = 1, 
second max = 5, second min = 2, and 
so on... Modified array is : 6 1 5 2 4 3.
Example 2:

Input:
N = 11
arr[]={10,20,30,40,50,60,70,80,90,100,110}
Output:110 10 100 20 90 30 80 40 70 50 60
Explanation: Max element = 110, min = 10, 
second max = 100, second min = 20, and 
so on... Modified array is : 
110 10 100 20 90 30 80 40 70 50 60.
Your Task:
The task is to complete the function rearrange() which rearranges elements as explained above. Printing of the modified array will be handled by driver code.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).
*/

// { Driver Code Starts
// C++ program to rearrange an array in minimum 
// maximum form 
#include <bits/stdc++.h>
using namespace std;

// This function wants you to modify the given input
// array and no need to return anything
// arr: input array
// n: size of array
void rearrange(long long int arr[], long long int n)
{
    sort(arr, arr+n);
    long long int brr[n];
    for(long long int i = 0; i < n; i++)
    brr[i] = arr[i];
    long long int j = n-1;
    for(long long int i = 0; i < n; i += 2)
    arr[i] = brr[j--];
    j = 0;
    for(long long int i = 1; i < n; i+= 2)
    arr[i] = brr[j++];

}

// Driver program to test above function 
int main() 
{
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        long long arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        rearrange(arr, n);
        
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
} 
