// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


int findPeak(int arr[],int low,int high,int n) 
{
    int mid = (low + high)>>1; 
  
    if ((mid == 0 || arr[mid-1] <= arr[mid]) && 
            (mid == n-1 || arr[mid+1] <= arr[mid])) 
        return mid;
  
    
    else if (mid > 0 && arr[mid-1] > arr[mid]) 
        return findPeak(arr, low, (mid -1), n);
  
    
    else 
        return findPeak(arr, (mid + 1), high, n);
} 

int peakElement(int arr[], int n)
{
   return findPeak(arr,0,n-1,n);
} 


// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		bool f=0;
		int A = peakElement(a,n);
		
		if(n==1)
		f=1;
		else
		if(A==0 and a[0]>=a[1])
		f=1;
		else if(A==n-1 and a[n-1]>=a[n-2])
		f=1;
		else if(a[A] >=a[A+1] and a[A]>= a[A-1])
		f=1;
		else
		f=0;
		
		cout<<f<<endl;
		
	}

	return 0;
}  // } Driver Code Ends
