/*	Problem statement

Given an array A[] of size N. Find the number of pairs (i, j) such that A_i XOR A_j = 0, and 1 <= i < j <= N.

Input:
The first line of the input contains a single integer T denoting the number of test cases. The first line of each test case contains N. followed by N separate integers. 

Output:
For each test case, output a single integer i.e counts of Zeros Xors Pairs

Constraints
1 ≤ T ≤ 200
2 ≤ N ≤ 10^5
1 ≤ A[i] ≤ 10^5

Example:
Input :
2
5
1 3 4 1 4

3
2 2 2

Output :

2
3

Explanation :

Test Case 1: Index( 0, 3 ) and (2 , 4 ) are only pairs whose xors is zero so count is 2.

*/

//Tushar Nikam codes
#include<bits/stdc++.h>
using namespace std;

int solve(int a[],int n) {
    
    int count=0;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if((a[i]^a[j])==0) {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    //T for Number of Test Cases
    int T;
    cin>>T;
    while(T--)
    {
        //start here
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        
        cout<<solve(a,n)<<endl;
    }
    return 0;
}
