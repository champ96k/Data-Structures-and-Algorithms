#include <bits/stdc++.h>
using namespace std;
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
   long n,k;
    cin>>n>>k;
    vector<long>arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    long left=0 ,right=0 ,count=0;
    long p=1;
    while(right<n){
        p*=arr[right];
        while(p>=k){
            p/=arr[left];
            left++;
            }
        count+=right-left+1;
	    right++;
    }
   cout<<count<<endl;
 }
	return 0;
}
