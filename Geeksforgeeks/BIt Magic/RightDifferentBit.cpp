#include <bits/stdc++.h>
using namespace std;
 
int solve(int x) {
    return log2(x&-x)+1;
}
int posOfRightMostDiffBit(int m, int n)
{   
    int bit = solve(m^n);
    return bit; 
}

int main()
{   
    int t;
    cin>>t; //input number of testcases
    while(t--)
    {
         int m,n;
         cin>>m>>n; //input m and n
         cout << posOfRightMostDiffBit(m, n)<<endl;
    }
    return 0;     
}   
