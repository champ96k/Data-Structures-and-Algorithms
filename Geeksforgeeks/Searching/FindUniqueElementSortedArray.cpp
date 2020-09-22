/*
Given a sorted array A, size N, of integers; every element appears twice except for one. Find that element that appears once in array.

Input:
The first line of input consists of T, the number of the test cases. T testcases follow. Each testcase contains two lines of input.
The first line of each test case contains the size of the array, and the second line has the elements of the array.

Output:
For each testcase, in a new line, print the number that appears only once in the array.
*/

//Tushar Nikam codes
#include<bits/stdc++.h>
using namespace std;

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
        int res = a[0];
        for(int i=1;i<n;i++) {
            res = res^a[i];
        }
        cout<<res<<endl;
    }
    return 0;
}
