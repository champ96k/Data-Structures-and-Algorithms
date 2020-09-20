//Tushar Nikam codes
#include<bits/stdc++.h>
using namespace std;

bool solve(int a[],int b[],int n) {
    
    sort(a,a+n);
    sort(b,b+n);
    int i;
    for(i=0;i<n;i++) {
       if(a[i]!=b[i]) {
            return false;
        }
    }
    return true;
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
        int a[n],b[n];
        
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        
        for(int i=0;i<n;i++) {
            cin>>b[i];
        }
        
        if(solve(a,b,n)){
            cout<<"1"<<endl;
        } else {
            cout<<"0"<<endl;
        }
    }
    return 0;
}
