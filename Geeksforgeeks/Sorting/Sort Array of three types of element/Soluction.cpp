#include<bits/stdc++.h>
using namespace std;

void segragate012(int a[], int n)
{
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
