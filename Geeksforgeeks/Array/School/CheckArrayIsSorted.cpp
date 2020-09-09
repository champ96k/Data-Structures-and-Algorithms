
// check array is sorted or not

#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i =0;i<n;i++){
	        cin>>a[i];
	    }
	    int i;
	    for(i = 0;i<n-1;i++){
	        if(a[i]>a[i+1]){
	            cout<<0<<endl;
	            break;
	        }
	    }
	   // cout<<i<<'p'<<endl;
	    if(i==n-1){
	        cout<<1<<endl;
	    }
	}
	return 0;
}
