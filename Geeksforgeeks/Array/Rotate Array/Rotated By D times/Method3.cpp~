// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

//Expected Time Complexity: O(N)
//Expected Auxiliary Space: O(1)

 // } Driver Code Ends

void reverse(int a[],int low,int high) {
    while(low<high) {
        swap(a[low],a[high]);
        low++;
        high--;
    }
}

void rotateArr(int a[], int d, int n){
    reverse(a,0,d-1);
    reverse(a,d,n-1);
    reverse(a,0,n-1);
}




// { Driver Code Starts.

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, d;
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    
	    rotateArr(arr, d,n);
	    
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}  // } Driver Code Ends
