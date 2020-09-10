/*
Time - 0(n^2)
*/

//Tushar Nikam codes
#include<bits/stdc++.h>
using namespace std;

int maxDiffernece(int a[],int n) {
    
    int res = 0;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<=n-1;j++) {
            int x = a[j]-a[i];
            res = max(res,x);
        }
       // cout<<"Max: "<<res<<endl;
    }
    return res;
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
        
        cout<<maxDiffernece(a,n)<<endl;
    }
    return 0;
}
