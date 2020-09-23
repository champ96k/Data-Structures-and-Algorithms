#include<bits/stdc++.h>

using namespace std;

long long a[10000000];
int main(){

    long long t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        for(long long i =0;i<n;i++){ 
            cin >> a[i];
        }
        long long num;
        cin >> num;

        long long low = 0, high = n-1, ans = -1;
        while(low <= high){
            long long mid = (low+high)/2;
            if(num == a[mid]){
                ans = mid;
                break;
            }

            if(a[low] <= a[mid]){
                if(a[low] <= num && num <= a[mid]){
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }
            }
            else{
                if(a[mid] < a[high]){
                    if(a[mid] <= num && num <= a[high]){
                        low = mid+1;
                    }
                    else{
                        high = mid-1;
                    }
                }
            }
        }
        cout << ans << endl;
    }
}

