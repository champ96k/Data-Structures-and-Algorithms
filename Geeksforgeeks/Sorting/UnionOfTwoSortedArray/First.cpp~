// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//arr1,arr2 : the arrays
// n, m: size of arrays
vector<int> findUnion(int a1[], int a2[], int n, int m)
{
    //Your code here
    //return vector with correct order of elements
    vector<int>v;
    int i=0,j=0;
    while(i<n && j<m) {
        if(a1[i]==a1[i-1]) {
            i++;
        } 
        if(a1[i]<a2[j]) {
            v.push_back(a1[i]);
            i++;
        } else if(a2[j]<a1[i]) {
            v.push_back(a2[i]);
            j++;
        }
    }
    int size=v.size();
    while(i<n) {
        if(a1[i]!=v[size]) {
            v.push_back(a1[i]);
            size++;
            i++;
        }
    }
    
    while(j<m) {
        if(a2[j]!=v[size]) {
            v.push_back(a2[j]);
            size++;
            j++;
        }
    }
    return v;
}

// { Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    
	    vector<int> ans = findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
