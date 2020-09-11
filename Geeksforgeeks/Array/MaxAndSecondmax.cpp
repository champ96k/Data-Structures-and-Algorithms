
/* Function to find largest and second largest element

Given an array arr[] of size N of positive integers which may have duplicates. The task is to find the maximum and second maximum from the array, and both of them should be distinct, so If no second max exists, then the second max will be -1.

Example 1:

Input:
N = 3
arr[] = {2,1,2}
Output: 2 1
Explanation: From the given array 
elements, 2 is the largest and 1 
is the second largest.
Example 2:

Input:
N = 5
arr[] = {1,2,3,4,5}
Output: 5 4
Explanation: From the given array 
elements, 5 is the largest and 4 
is the second largest.
Your Task:
The task is to complete the function largestAndSecondLargest(), which should return maximum and second maximum element from the array with first element as maximum element and second element as second maximum(if there is no second maximum the  second element should be -1)

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

*/
#include <bits/stdc++.h>
using namespace std;

vector<int> largestAndSecondLargest(int, int[]);

vector<int> largestAndSecondLargest (int sizeOfArray, int a[])
{
int max = INT_MIN, max2= INT_MIN;
for(int i=0;i< sizeOfArray;i++)
{
if(a[i]>max || a[i]>max2)
{
if(a[i]>max && max!=INT_MIN ) max2=max;
if(a[i]>max) max=a[i];
if(a[i]!=max && a[i]>max2) max2=a[i];
}
}
return {max,(max2==INT_MIN)?-1:max2};
}


// { Driver Code Starts.

// Driver Code
int main() {
	
	// Testcase input
	int testcases;
	cin >> testcases;
    
    // Looping through all testcases
	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    // Array input
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }
	    
	    vector<int> ans = largestAndSecondLargest(sizeOfArray, arr);
	    cout<<ans[0]<<' '<<ans[1]<<endl;
	}
	
	return 0;
}  // } Driver Code Ends
