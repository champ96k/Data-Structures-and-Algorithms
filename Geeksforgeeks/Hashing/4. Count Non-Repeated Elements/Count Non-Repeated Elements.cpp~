// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int countNonRepeated(int arr[], int n);

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    cout<<countNonRepeated(arr,n)<<endl;
	    
	}
	return 0;
}
// } Driver Code Ends


//Complete this function

int countNonRepeated(int arr[], int n)
{
    //Your code here
    unordered_map<int,int>map;
    
    for(int i=0;i<n;i++) {
        map[arr[i]]++;
    }
    
    int res=0;
    for(auto x:map) {
        if(x.second==1) {
            res++;
        }
    }
    return res;
}

