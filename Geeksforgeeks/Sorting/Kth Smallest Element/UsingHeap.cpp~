// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

int kthSmallest(int arr[], int n, int k){
    
    priority_queue<int, vector<int>> pq;
    
    for(int i = 0;i<n;i++){
	        if(pq.size() == k){ // if size becomes equal to k
	            if(pq.top() > arr[i]){ // if top element is larger than arr[i]
	                pq.pop();
	                pq.push(arr[i]);
	            }
	        }
	        else if(pq.size() < k){
	            pq.push(arr[i]);
	        }
	    }
	
	return pq.top(); // returns kth smallest element
}



// { Driver Code Starts.
int main(){
	
	int t;
	cin >> t;
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    int arr[n];
	    
	    for(int i = 0; i<n; ++i)
	        cin>>arr[i];
	        
	    cout << kthSmallest(arr, n, k) << endl;
	    
	}
	return 0;
}  // } Driver Code Ends
