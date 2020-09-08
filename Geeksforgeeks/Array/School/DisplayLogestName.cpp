#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    int m=0;
	    string ans;
	    int res=0;
	    for(int i=0;i<n;i++){
	        cin>>s;
	        int l=s.length();
	        m=max(m,l);
	        if(m>res){
	            ans=s;
	            res=m;
	        }
	    }
	    cout<<ans<<"\n";
	    
	}
	return 0;
}
