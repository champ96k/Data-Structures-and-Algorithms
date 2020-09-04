/*
You are given a number n. You need to find the digital root of n. DigitalRoot of a number is the recursive sum of its digits until we get a single digit number.

Example 1:

Input:
n = 1
Output:  1
Explanation: Digital root of 1 is 1
Example 2:

Input:
n = 99999
Output: 9
Explanation: Sum of digits of 99999 is 45
which is not a single digit number, hence
sum of digit of 45 is 9 which is a single
digit number.
Your Task:
You don't need to read input or print anything. Your task is to complete the function digitalRoot that takes n as parameter and returns the digital root of n. 

Expected Time Complexity: O((Num of Digits)2).
Expected Auxiliary Space: O(Num of Digits).

Constraints:
1 <= n <= 107
*/

#include <iostream>
using namespace std;

int digitalRoot(int n)
{
    if(n==0) 
    return 0;
    return (n%10 + digitalRoot(n/10))%10 + (n%10 + digitalRoot(n/10))/10;
}

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    cout<<digitalRoot(n)<<endl;
	}
	return 0;
}
