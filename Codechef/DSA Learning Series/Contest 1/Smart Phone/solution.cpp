#include<bits/stdc++.h>
using namespace std;

void problem4()
{
    long long k,A[500005],n;
    cin>>n;
    k=n;
    for(int i=0;i<n;i++)cin>>A[i];
    sort(A,A+n);
    for(int i=0;i<n;i++)
    {
        A[i]=A[i]*k;
        k--;
    }
    sort(A,A+n);
    cout<<A[n-1]<<endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    problem4();

    return 0;
}
