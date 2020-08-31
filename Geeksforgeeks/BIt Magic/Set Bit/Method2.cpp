// 0(set Bit count)

//Tushar Nikam codes
#include<bits/stdc++.h>
using namespace std;

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
        int res=0;
        while(n>0) {
            n=n&(n-1);
            res++;
        }
        cout<<res<<endl;
    }
    return 0;
}
