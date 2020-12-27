// C++ implementation to check whether the given array 
// is a k sorted array or not 
#include <bits/stdc++.h> 
using namespace std; 

// function to find index of element 'x' in sorted 'arr' 
// uses binary search technique 
int binarySearch(int arr[], int low, int high, int x) 
{ 
	while (low <= high) 
	{ 
		int mid = (low + high) / 2; 
		
		if (arr[mid] == x) 
			return mid; 
		else if (arr[mid] > x) 
			high = mid - 1; 
		else	
			low = mid + 1;	 
	} 
} 

// function to check whether the given array is 
// a 'k' sorted array or not 
string isKSortedArray(int arr[], int n, int k) 
{ 
	// auxiliary array 'aux' 
	int aux[n]; 
	
	// copy elements of 'arr' to 'aux' 
	for (int i = 0; i<n; i++) 
		aux[i] = arr[i]; 
	
	// sort 'aux'	 
	sort(aux, aux + n); 
	
	// for every element of 'arr' at index 'i', 
	// find its index 'j' in 'aux' 
	for (int i = 0; i<n; i++) 
	{ 
		// index of arr[i] in sorted array 'aux' 
		int j = binarySearch(aux, 0, n-1, arr[i]); 
		
		// if abs(i-j) > k, then that element is 
		// not at-most k distance away from its 
		// target position. Thus, 'arr' is not a 
		// k sorted array 
		if (abs(i - j) > k) 
			return "No"; 
	} 
	
	// 'arr' is a k sorted array 
	return "Yes";	 
} 

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>k;
	 
	cout <<isKSortedArray(arr, n, k)<<endl;
	}
	return 0;	 
}  

