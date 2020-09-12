// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends





// Functio to find first smallest positive
// missing number in the array
int missingNumber(int nums[], int x) { 
    int n=x, i=0;
        while(i<n) {
            if (nums[i]<=0) {
                swap(nums[i],nums[n-1]);
                n--;
            }
            else i++;
        }
        for (int i=0; i<n; ++i) {
            if (abs(nums[i])>n) continue;
            nums[abs(nums[i])-1]=-1*abs(nums[abs(nums[i])-1]);
        }
        for (int i=0; i<n; ++i) {
            if (nums[i]>0) return i+1;
        }
        return n+1;
} 


// { Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];
        cout<<missingNumber(arr, n)<<endl;
    }
    return 0; 
}   // } Driver Code Ends
