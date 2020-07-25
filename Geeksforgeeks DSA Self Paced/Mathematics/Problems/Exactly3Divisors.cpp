#include <bits/stdc++.h>
using namespace std;

//More time complexity this is not acceptble

int exactly3Divisors(int N)
{
    int i,j,k=0,l=0;
    for(i=1;i<=N;i++)
    {
    for(j=1;j<=i;j++)
    {
    if(i%j==0)
    k++;
    
    }
    if(k==3)
    l++;
    k=0;
    }
    return l;
}

// { Driver Code Starts.


int main()
 {
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        cout<<exactly3Divisors(N)<<endl;
    }
