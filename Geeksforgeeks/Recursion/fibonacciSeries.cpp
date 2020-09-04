/*
You are given a number n. You need to find nth Fibonacci number.
F(n)=F(n-1)+F(n-2); where F(1)=1 and F(2)=1

Example 1:

Input:
n = 1
Output: 1
Explanation: The first fibonacci
 number is 1
Example 2:

Input:
n = 20
Output:6765
Explanation: The 20th fibonacci 
number is 6765
Your Task:
You don't need to read input or print anything. You only need to complete the function fibonacci that takes n as parameters and returns the n-th fibonacci number.

Expected Time Complexity: O(2n).
Expected Auxiliary Space: O(N).



*/
#include <bits/stdc++.h>
using namespace std;
long long fibonacci(int n)
{
    if(n==0) 
    return 0;
    if(n==1)
     return 1;
     
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
	int T;
	cin>>T;
	while (T--)
	{
	    int n;
	    cin>>n;
	    cout<<fibonacci(n)<<endl;
	}
	return 0;
} 
