// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

void segragate012(int A[], int N);

 // } Driver Code Ends


// Function to segregate 0s, 1s and 2s

// The function should do the stated modifications in the given array arr[]
// Do not return anything.

// arr[]: Input Array
// N: Size of the Array arr[]

void segragate012(int a[], int n)
{
    // Your Code Here
    sort(a,a+n);
    int low=0,high=n-1;
    int mid=0;
    
    while(mid<=high) {
        
        if(a[mid]==0) {
            swap(a[low],a[mid]);
            low++;
            mid++;
        } else if(a[mid]==1) {
            mid++;
        } else {
            swap(a[mid],a[high]);
            high--;
        }
    }
}

// { Driver Code Starts
int main() {

    int T;
    cin >> T;

    while(T--){
        int N;
        cin >>N;
        int A[N];
        for(int i=0;i<N;i++){
            cin >> A[i];
        }

        segragate012(A, N);

        for(int i=0;i<N;i++){
            cout << A[i]  << " ";
        }

        cout << endl;
        
        
    }

}
  // } Driver Code Ends
