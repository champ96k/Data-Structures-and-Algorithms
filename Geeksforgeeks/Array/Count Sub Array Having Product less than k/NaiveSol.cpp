//Tushar Nikam codes
#include<bits/stdc++.h>
using namespace std;

int countsubarray(int array[], int n, int k) 
{ 
    int count = 0;  
    int i, j, mul;  
  
    for (i = 0; i < n; i++) 
    { 
        // Counter for single element 
        if (array[i] <= k) 
            count++; 
  
        mul = array[i]; 
  
        for (j = i + 1; j < n; j++)  
        { 
            // Multiple subarray 
            mul = mul * array[j];  
            // If this multiple is less 
            // than k, then increment 
            if (mul <= k)  
                count++;  
            else
                break;  
        } 
    } 
  
    return count; 
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
        cin>>n;
        cin>>k;
        int a[n];
        
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        
        cout<<countsubarray(a,n,k)<<endl;
    }
    return 0;
}
