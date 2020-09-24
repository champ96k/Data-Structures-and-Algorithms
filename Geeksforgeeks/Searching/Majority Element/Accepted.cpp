
#include<bits/stdc++.h>
using namespace std;

// unordered_map<char, int>um;
int a[1000001];

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        bool flag = false;
        for(int i =0;i<n;i++){
            int k;
            cin >> k;
            a[k]++;
            if(a[k] > n/2 && flag == false){
                cout << k << endl;
                flag = true;
            }
        }
        if(flag == false){
            cout << "-1" << endl;
        }
        memset(a, 0, sizeof(a));
    }

    

    return 0;
}
