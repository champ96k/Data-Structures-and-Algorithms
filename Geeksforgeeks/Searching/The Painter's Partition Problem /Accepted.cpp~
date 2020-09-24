#include<bits/stdc++.h>
using namespace std;
bool partition(int k,int n,int arr[],int p){
    int j=1;
    int sum=arr[0];
    for(int i=1;i<n;i++){
        sum+=arr[i];
        if(sum>p){j++;sum=arr[i];}
        if(j>k)return false;
    }
    return true;
    
}

int binary(int k,int n,int arr[]){
    int l=*max_element(arr,arr+n);
    int r=accumulate(arr,arr+n,0);
    int ans=0;
    while(l<=r){
        int mid=(l+r)/2;
        if(partition(k,n,arr,mid)){ans=mid;r=mid-1;}
        else l=mid+1;
    }
    return ans;
}

int main()
 {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;cin>>t;
	while(t--){
	    int k,n;cin>>k>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)cin>>arr[i];
	    cout<<binary(k,n,arr)<<endl;
	}
	return 0;
}
