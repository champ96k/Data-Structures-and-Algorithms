// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

int findMedian(int *, int , int *, int);

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, m;
	    cin >> n >> m;
	    int arr[n];
	    int brr[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> brr[i];
	    }
	    
	    if(n < m)
	        cout << findMedian(arr, n, brr, m) << endl;
	   else
	        cout << findMedian(brr, m, arr, n) << endl;
	    
	}

}// } Driver Code Ends


int findMedian(int a[], int n, int b[], int m){
    // code here
    int temp[m+n];
    
    //copy a[] to temp[]
    for(int i=0;i<n;i++) {
        temp[i] = a[i];
    }
    
    //copy b[] to temp[]
    for(int i=n;i<n+m;i++) {
        temp[i] = b[i-n];
    }
    
    //sort temp[]
    sort(temp,temp+(m+n));
    
    int mid = (m+n)/2;
    if((m+n)%2==0) {  //even
        return ((temp[mid]+temp[mid-1])/2);
        
    } else {    //odd
        return (temp[mid]);
    }
    
}
