#include<bits/stdc++.h>
using namespace std;

int bin_search(int A[],int left,int right,int k);

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
            cin>>a[i];
        int key;
        cin>>key;
        int found = bin_search(a,0,N-1,key);
        cout<<found<<endl;
    }
}

/*You need to complete this function */
int bin_search(int a[], int low, int high, int k)
{
    while(low<=high) {
        int mid = (low+high)/2;
        
        if(a[mid]==k) 
        return mid;
        
        //left
        if(a[mid]>k) {
            high = mid-1;
        } else {
            low = mid+1;
        }
    }
    return -1;
}
