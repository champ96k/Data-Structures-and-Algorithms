/*
Given a array of length N, at each step it is reduced by 1 element. In the first step the maximum element would be removed, while in the second step minimum element of the remaining array would be removed, in the third step again the maximum and so on. Continue this till the array contains only 1 element. And print that final element remaining in the array.

Input:
The first line contains a single integer T i.e. the number of test cases. The first line of each test case consists of a single integer N. The second and last line of each test case contains the N spaced integers .

Output:
Fore each test case in new line print the final remaining element in the array.

Constraints:
1 <=T <= 100
1 <= N <= 1000
1 <= Ai <= 1000
 

Example:
Input:
2
7
7 8 3 4 2 9 5
8
8 1 2 9 4 3 7 5

Ouput:
5
4

Explanation:
Test Case 1:
In first step '9' would be removed, in 2nd step '2' will be removed, in third step '8' will be removed and so on. So the last remaining element would be '5'.     
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    if(n%2==0)
	    {
	        cout<<a[n/2-1]<<endl;
	    }
	    else
	    {
	        cout<<a[n/2]<<endl;
	    }
	}
	return 0;
}
