// { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;
int PalinArray(int a[], int n);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		cout<<PalinArray(a,n)<<endl;
	}
}// } Driver Code Ends

int PalinArray(int a[], int n)
{  
   for(int j=0;j<n;j++)
   {
       int n=a[j];
       int rem=0;
       int rev=0;
       while(n>0)
       {
           rem=n%10;
           rev=rev*10+rem;
           n=n/10;
       }
       if(rev!=a[j])
       return 0;
   }
   return 1;
}
