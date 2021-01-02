//Tushar Nikam codes
#include<bits/stdc++.h>
using namespace std;

int solve(int a[],int n) {
    
    unordered_map<int, int> cnt; 
    int ans = 0, pre_sum = 0; 
    for (int i = 0; i < n; i++) { 
        ans += (i * a[i]) - pre_sum; 
        pre_sum += a[i]; 

        if (cnt[a[i] - 1]) 
            ans -= cnt[a[i] - 1]; 

        if (cnt[a[i] + 1]) 
            ans += cnt[a[i] + 1]; 

        cnt[a[i]]++; 
    } 
    return ans; 
}

int main()
{
    //T for Number of Test Cases
    int T;
    cin>>T;
    while(T--)
    {
        //start here
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        cout<<solve(a,n)<<endl;
    }
    return 0;
}
