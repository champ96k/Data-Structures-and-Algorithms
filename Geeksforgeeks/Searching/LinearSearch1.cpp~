/*	Problem statement
Given an integer array Arr[] and an element x. The task is to find if the given element is present in array or not.

Input:
First line contains an integer, the number of test cases 'T'. For each test case, first line contains an integer 'N', size of array. The second line contains the elements of the array separated by spaces. Third line contains element to be find in the array.

Output:
For each testcase, output a single line containing first index of element to be found in array. If element is not in the array, then print "-1" (without quotes).

Constraints:
1 <= T <= 100
1 <= N <= 100
1 <= Arr[i] <= 100

Example:
Input:
2
4
1 2 3 4
3
2 4 7 8
1

Output:
2
-1

Explanation:
Testcase 1: There is one test case with array as {1, 2, 3 4} and element to be searched as 3.  Since 3 is present at index 2, output is 2.

*/

//Tushar Nikam codes
#include<bits/stdc++.h>
using namespace std;

int solve(int a[],int n,int k) {
    for(int i=0;i<n;i++) {
        if(a[i]==k) 
        return i;
    }
    return -1;
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
        int k;
        cin>>k;
        
        cout<<solve(a,n,k)<<endl;
        
    }
    return 0;
}
