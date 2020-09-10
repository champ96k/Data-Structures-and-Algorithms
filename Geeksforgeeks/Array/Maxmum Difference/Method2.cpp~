//Tushar Nikam codes
#include<bits/stdc++.h>
using namespace std;

int maxDiff(int arr[], int n) 
{ 
    int maxDiff = -1;  
    int maxRight = arr[n-1];  
    for (int i = n-2; i >= 0; i--) 
    { 
        if (arr[i] > maxRight) 
            maxRight = arr[i]; 
        else
        { 
            int diff = maxRight - arr[i]; 
            if (diff > maxDiff) 
            { 
                maxDiff = diff; 
            } 
        } 
    } 
    return maxDiff; 
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
        
        cout<<maxDiff(a,n)<<endl;
    }
    return 0;
}
