// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

//User function template for C++
class Solution{
public:
	void merge(int a1[], int a2[], int n, int m) {
	    // code here
	    
	    sort(a1,a1+n);
	    sort(a2,a2+m);
	    int temp[n+m];
	    
	    for(int i=0;i<n;i++) {
	        temp[i] = a1[i];
	    }
	    
	    for(int i=0;i<m;i++) {
	        temp[i+n] = a2[i];
	    }
	    
	    sort(temp,temp+m+n);
	    
	    for(int i=0;i<n;i++) {
	        a1[i] = temp[i];
	    }
	    
	    for(int i=0;i<m;i++) {
	        a2[i] = temp[n+i];
	    }
	    
	}
};


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends
