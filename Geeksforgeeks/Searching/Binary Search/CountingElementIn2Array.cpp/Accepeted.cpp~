// { Driver Code Starts
// C++ implementation of For each element in 1st 
// array count elements less than or equal to it
// in 2nd array
#include <bits/stdc++.h>
 
using namespace std;
 
// function returns the index of largest element 
// smaller than equal to 'x' in 'arr'. For duplicates
// it returns the last index of occurrence of required
// element. If no such element exits then it returns -1. 
int binary_search(int arr[], int l, int h, int x);

// function to count for each element in 1st array,
// elements less than or equal to it in 2nd array
vector <int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                             int m, int n);

// Driver program to test above
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int arr1[m],arr2[n];
        for(int i=0;i<m;i++)
        cin>>arr1[i];
        for(int j=0;j<n;j++)
        cin>>arr2[j];
        vector <int> res = countEleLessThanOrEqual(arr1, arr2, m, n);
        for (int i = 0; i < res.size (); i++) cout << res[i] << " ";
        
        cout<<endl;
    }
    return 0;
}// } Driver Code Ends


//binary Search
int binary_search(int arr[], int l, int h, int x) 
{ 
    while (l <= h) { 
        int mid = (l + h) / 2; 
        if (arr[mid] <= x) 
            l = mid + 1; 
        else
            h = mid - 1; 
    } 
    return h; 
} 

vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                             int m, int n)
  {
    vector<int>v;
    sort(arr2,arr2+n);
    for(int i=0;i<m;i++) {
        int index = binary_search(arr2,0,n-1,arr1[i]);
        v.push_back(index+1);
    }
  return v;
}
