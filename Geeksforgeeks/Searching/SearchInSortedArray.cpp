/*	Problem statement

*/

//Tushar Nikam codes
#include<bits/stdc++.h>
using namespace std;

int solve(int a[],int n,int k) {
    
    for(int i=0;i<n;i++) {
            if(a[i]==k) {
                return 1;
            } 
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
        int n,k;
        cin>>n>>k;
        int a[n];
        
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        
        cout<<solve(a,n,k)<<endl;
        
    }
    return 0;
}
