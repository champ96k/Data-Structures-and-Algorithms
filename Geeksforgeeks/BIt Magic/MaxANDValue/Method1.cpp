// 0(n^2)


#include<bits/stdc++.h>
using namespace std;

int maxAND (int arr[], int n)
{
     int res = 0; 
    for (int i=0; i<n; i++) 
       for (int j=i+1; j<n; j++) 
          res = max(res, arr[i] & arr[j]); 
  
    return res; 
    
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+5],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        cout <<  maxAND(arr,n)<<endl;
    }
    return 0;
}
