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
		
		long long start = 0,end =0;
		long long mind = INT_MAX;
		for(long long i=0;i+m-1<n;i++)
		{
			long long diff = a[i+m-1] - a[i];
			if(mind>diff)
			{
				mind = diff;
				start = i;
				end = i+m-1;
			}
		}
		cout<<a[end]-a[start]<<endl;
        memset(a, 0, n);
	}
	return 0;
}
