/*
Given an array A[] representing the size of candles which reduces 1 unit in a day. The room is illuminated using given N candles, where N is the size of array A, the task is to find the maximum number of days the room is without darkness.

 

Example 1:

Input: N = 3, arr[] = {1,1,2} 
Output: 2
Explanation: The candles' length reduce 
by 1 in 1 day. So, at the end of day 1: 
Sizes would be 0 0 1, So, at end of 
day 2: Sizes would be 0 0 0. This means 
the room was illuminated for 2 days.
Example 2:

Input: N = 5, arr[] = {2,3,4,2,1} 
Output: 4
Your Task:
This is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function maxDays() that takes array A[] and integer N as parameters and returns the desired output.

 

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).
*/

#include <bits/stdc++.h>
using namespace std;
class Solution{

	

	public:
	int  maxDays(int a[],int n)
	{
	    sort(a,a+n);
	    return a[n-1];
	}
	 

};
	
int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
       

        Solution ob;
        cout <<  ob.maxDays(a, n);
	    cout << "\n";
	     
    }
    return 0;
}

