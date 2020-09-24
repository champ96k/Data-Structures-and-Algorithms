/*	Problem statement

Given an array of size n and an integer b, traverse the array and if the element in array is b, double b and continue traversal. In the end return value of b.

Input:

The first line of the input contains T denoting the number of testcases. Then follows the description of testcases. The first line of each testcase contains two space separated positive integers n and b denoting the size of array and initial value of b respectively.The second line contains n space separated positive integers denoting the elements of array.


Output:

For each testcase, print the final value of b.


Constraints:

1<=T<=100
1<=n<=50
1<=b<=1000
1<=A[i]<=1018 (1<=i<=N)


Example:

Input:
1
5 2
1 2 3 4 8

Output:
16

Explanation: The initial value of b is 2. Traversing from the first element, 2 is found in 2nd position, so doubling b we get b = 4 . 4 is found in 4th position so doubling b we get b = 8. 8 is found in 5th position, so doubling b we get b = 16.


*/

//Tushar Nikam codes
#include<bits/stdc++.h>
using namespace std;

long long solve(long long a[],long long n,long long b) {
    
    for(long long i=0;i<n;i++) {
        if(a[i]==b) {
            b = b*2;
        } 
    }
    return b;
}

int main()
{
    //T for Number of Test Cases
    long long T;
    cin>>T;
    while(T--)
    {
        //start here
        long long n,b;
        cin>>n;
        long long a[n];
        cin>>b;
        for(long long i=0;i<n;i++) {
            cin>>a[i];
        }
        
        cout<<solve(a,n,b)<<endl;
    }
    return 0;
}
