/*
Given an array arr[] of N integers, the task is to find the number of pairs in the array whose XOR is odd.

Example 1:

Input: N = 3, arr[] = {1, 2, 3}
Output: 2
Explanation: All pairs of array
             1 ^ 2 = 3
             1 ^ 3 = 2
             2 ^ 3 = 1
Example 2:

Input: N = 2, arr[] =  {1, 2}
Output: 1
Explanation: 1^2 =3 which is odd.
Your Task:
This is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function countXorPair() that takes array arr and integer N as parameters and returns the desired output.

 

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).
*/
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
	

	public:
	long long countXorPair(long long arr[], int n)
	{
         // To store count of odd and even 
    // numbers 
    int odd = 0, even = 0; 
  
    for (int i = 0; i < n; i++) { 
        // Increase even if number is 
        // even otherwise increase odd 
        if (arr[i] % 2 == 0) 
            even++; 
        else
            odd++; 
    } 
  
    // Return number of pairs 
    return odd * even; 

	}
	 

};
	  


// { Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];

       

        Solution ob;
        cout << ob.countXorPair(arr, n);
        
	    cout << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends
