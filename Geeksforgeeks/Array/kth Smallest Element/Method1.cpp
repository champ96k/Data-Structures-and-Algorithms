//Time complexity       - 0(nlogn)
//Space                 - 0(1)

//Tushar Nikam codes
#include<bits/stdc++.h>
using namespace std;

int kthSmallestElement(int a[],int n,int k) {
    
    sort(a,a+n);
    return a[k-1];
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
        
        cout<<kthSmallestElement(a,n,k)<<endl;
    }
    return 0;
}
