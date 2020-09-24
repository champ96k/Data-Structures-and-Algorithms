#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
bool findTriplets(int arr[], int n);
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
        if(findTriplets(arr, n))
        cout<<"1"<<endl;
        else 
        cout<<"0"<<endl;
	}
    return 0;
}// } Driver Code Ends


/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
bool findTriplets(int a[], int n)
{ 
    //Your code here
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            for(int k =j+1;k<n;k++) {
                if(a[i]+a[j]+a[k]==0)
                return true;
            }
        }
    }
    return false;
}
