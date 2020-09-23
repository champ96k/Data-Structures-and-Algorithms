#include <bits/stdc++.h>
using namespace std;

int minNumber(int arr[], int low, int high)
{
     while(low < high) 
    { 
        int mid = low + (high - low)/2; 
        if (arr[mid] == arr[high]) 
            high--; 
        else if(arr[mid] > arr[high]) 
            low = mid + 1; 
        else
            high = mid; 
    } 
    return arr[high];
}

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];		
		cout << minNumber(a,0,n-1) << endl;
	}
	return 0;
} 
