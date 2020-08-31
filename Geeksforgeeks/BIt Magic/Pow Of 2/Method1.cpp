//Tushar Nikam codes
#include<bits/stdc++.h>
using namespace std;

bool isPow(long long int n) {
    if(n==0)
    return false;
    while(n!=1) {
        if(n%2!=0)
        return false;
        n=n/2;
    }
    return true;
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
