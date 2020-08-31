//Tushar Nikam codes
#include<bits/stdc++.h>
using namespace std;

bool isPow(long long int n) {
    if(n==0)
    return false;
    
    return ceil(log2(n))==floor(log2(n));
}

int main()
{
    //T for Number of Test Cases
    int T;
    cin>>T;
    while(T--)
    {
        //start here
        long long int n;
        cin>>n;
        if(isPow(n)) {
            cout<<"YES"<<endl;
        } else  {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
