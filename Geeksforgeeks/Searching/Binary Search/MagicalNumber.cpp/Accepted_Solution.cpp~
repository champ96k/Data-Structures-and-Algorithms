#include<bits/stdc++.h>
using namespace std; 
int binarySearch(int arr[], int low, int high);
int main()
{
	int test =0; 
	cin>>test;
	while(test--)
	{
	    int n, i; 
	    cin>>n; 
	    int a[n]; 
	    for(i=0; i<n; i++)
	    cin>>a[i]; 
	    
	    cout<<binarySearch(a, 0, n-1)<<endl; 
	    
	   // cout<<"\n\n"; 
	}
	
}

int binarySearch(int a[], int low, int high)
{
      //add code here.
      
     while(low<=high) {
         int mid = (low+high)/2;
         
         if(a[mid]==mid) {
            return mid;
          }
         if(a[mid]>mid) {
          high = mid-1;   
         } 
         if(a[mid]<mid) {
             low= mid+1;
         }
     }
     return -1;
}
