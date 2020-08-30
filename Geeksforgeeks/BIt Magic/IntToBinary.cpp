//Tushar Nikam codes
/*
Write a program to print Binary representation of a given number N.

Input:
The first line of input contains an integer T, denoting the number of test cases. Each test case contains an integer N.

Output:
For each test case, print the binary representation of the number N in 14 bits.

*/

#include<bits/stdc++.h>
using namespace std;

void solve(unsigned n) {
    if(n>1) {
        solve(n/2);
    }
    cout<<(n%2);
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
        solve(n);
        cout<<endl;
    }
    return 0;
}
