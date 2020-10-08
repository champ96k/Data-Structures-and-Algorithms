// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// function to find the triplet which sum to x
// arr[] : The input Array
// N : Size of the Array
// X : Sum which you need to search for 

bool find3Numbers(int a[], int n, int x)
{
    //Your Code Here
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            for(int k=j+1;k<n;k++) {
                if((a[i]+a[j]+a[k])==x)
                    return true;
            }
        }
    }
    return false;
}


// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,sum;
		cin>>N>>sum;
		int i,A[N];
		for(i=0;i<N;i++)
			cin>>A[i];
        cout <<  find3Numbers(A, N, sum) << endl;
    }
}
  // } Driver Code Ends
