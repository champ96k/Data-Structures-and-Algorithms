#include <bits/stdc++.h>
using namespace std;
long long a[10000000];
int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		
		for(long long i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		long long m;
		cin>>m;
		sort(a,a+n);
		
		long long res = a[m-1] - a[0];
		long long mind = INT_MAX;
		for(long long i=1;i+m-1<n;i++)
		{
		    res=min(res,(a[i+m-1]-a[i]));
		}
		
		cout<<res<<endl;
	}
	return 0;
}
