/*
Given an array of even size N, task is to find minimum value that can be added to an element so that array become balanced. An array is balanced if the sum of the left half of the array elements is equal to the sum of right half.


Example 1:

Input:
N = 4
arr[] = {1, 5, 3, 2}
Output: 1
Explanation: 
Sum of first 2 elements is 1 + 5  = 6, 
Sum of last 2 elements is 3 + 2  = 5,
To make the array balanced you can add 1.

Your Task:  
You don't need to read input or print anything. Your task is to complete the function minValueToBalance() which takes the array a[] and N as inputs and returns the desired result.

 

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
*/

#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

class Solution
{
public:
    int minValueToBalance(int a[], int n)
    {
       //code here.
       int len = n/2;
       int sum1=0;
       for(int i=0;i<len;i++) {
           sum1=sum1+a[i];
       }
       
       int sum2=0;
       for(int i=len;i<n;i++) {
           sum2=sum2+a[i];
       }
       
       return abs(sum2-sum1);
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;	
		cout<<ob.minValueToBalance(a,n)<<endl;
	}
	return 0;
}  // } Driver Code Ends
