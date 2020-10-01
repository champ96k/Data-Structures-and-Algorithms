#include<bits/stdc++.h>
using namespace std;
#define ll long long
long int merge(int * arr,int l ,int mid, int r)
{
	long int  ans1=0;
	int temp[r-l+1];
	int i=l;
	int j=mid+1,k=0;
	while (i<=mid  && j<=r)
	{
		if (arr[i]<=arr[j])
			temp[k++]=arr[i++];
		else if (arr[i]>arr[j])
			{ 
				ans1+=(mid-i+1);
				temp[k++]=arr[j++];

			}
	}
	while(i<=mid)
		temp[k++]=arr[i++];
	while(j<=r)
		temp[k++]=arr[j++];
	for (int i=0;i<r-l+1;i++)
		arr[i+l]=temp[i];
	//delete [] temp;
	return ans1;

}

long int merge_sort(int * arr, int l,int r)
{
	long int ans=0;
	if (l<r)
	{
		int mid= l+(r-l)/2;
		ans+=merge_sort(arr,l,mid);
		ans+=merge_sort(arr,mid+1,r);
		ans+=merge(arr,l,mid,r);
	}
	
	return  ans;
}

int main()
{
	int t,n;
	cin>>t;
	while (t--)
	{
		cin>>n;
		int *arr=new int[n];
		for (int i=0;i<n;i++)
			cin>>arr[i];
		cout<<merge_sort(arr,0,n-1)<<endl;

		delete [] arr;
	}
	return 0;
}
