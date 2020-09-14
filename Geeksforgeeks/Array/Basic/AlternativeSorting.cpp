/*
Given an array arr[] of N distinct integers, output the array in such a way that the first element is first maximum and the second element is the first minimum, and so on.
 

Example 1:

Input: N = 7, arr[] = {7, 1, 2, 3, 4, 
                                5, 6}
Output: 7 1 6 2 5 3 4
Explanation:The first element is first 
maximum and second element is first 
minimum and so on.
Example 2:

Input: N = 8, arr[] = {1, 6, 9, 4, 3, 
                             7, 8, 2}
Output: 9 1 8 2 7 3 6 4​

Your Task:
This is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function alternateSort() that takes array arr and integer N as parameters and returns the desired array as output.

 

Expected Time Complexity: O(NlogN).
Expected Auxiliary Space: O(N).
*/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends





class Solution{


	public:
	vector<int> alternateSort(int arr[], int n)
	{
	    // Your code goes here
	    sort(arr,arr+n);
        vector<int>temp;
         if(n%2==0){
         for(int i=0;i<n/2;i++){
            temp.push_back(arr[n-i-1]);
            temp.push_back(arr[i]);
           }
        }else{
         for(int i=0;i<=n/2;i++){
               if(i==n/2)temp.push_back(arr[n-i-1]);
                else{
                    temp.push_back(arr[n-i-1]);
                  temp.push_back(arr[i]);
            }
        }
     } 
     return temp;
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
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
       

        Solution ob;
        vector<int> ans = ob.alternateSort(a, n);
        for(auto i:ans)
        	cout << i << " ";
	    cout << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends
