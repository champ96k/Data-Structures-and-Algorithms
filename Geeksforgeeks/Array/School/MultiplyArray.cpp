//Tushar Nikam codes
#include<bits/stdc++.h>
using namespace std;

int mul(int a[],int n) {
    
    int res=a[0];
    for(int i=1;i<n;i++) {
        res=res*a[i];
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
        
        cout<<mul(a,n)<<endl;
    }
    return 0;
}
