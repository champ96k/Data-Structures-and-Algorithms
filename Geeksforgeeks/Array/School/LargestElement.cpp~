//Tushar Nikam codes
#include<bits/stdc++.h>
using namespace std;

int findLargest(int a[],int n) {
    int max1=a[0];
    
    for(int i=0;i<n;i++) {
        for(int j=i;j<n-1;j++) {
            int x=max(a[i],a[j+1]);
            max1=max(max1,x);
        }
    }
    return max1;
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
        
        cout<<findLargest(a,n)<<endl;
    }
    return 0;
}
