#include <bits/stdc++.h>
using namespace std;

// arr[]: Input Array
// N : Size of the Array arr[]

long long int inversionCount(long long a[], long long n)
{
    // Your Code Here
    long long count=0;
    for(long long i=0;i<n;i++) {
        for(long long j=i+1;j<n;j++) {
            if(a[i]>a[j]) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        
        cout << inversionCount(A,N) << endl;
    }
    
    return 0;
}
