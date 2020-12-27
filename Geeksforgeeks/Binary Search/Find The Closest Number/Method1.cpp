//Tushar Nikam codes
#include<bits/stdc++.h>
using namespace std;

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int ar[n];
	    int i,min=INT_MAX,s=INT_MIN,m;
	    for(i=0;i<n;i++)
	    {   cin>>ar[i];
	        m=abs(k-ar[i]);
	        if(min>=m)
	        {   min=m;
	            if(s<ar[i])
	             s=ar[i];
	            
	        }
	       
	    }
	        cout<<s<<endl;
	        
	    
	}
	return 0;
}
