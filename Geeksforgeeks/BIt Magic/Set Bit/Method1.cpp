
//Time 0(Total Bit in n)
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
            if(n%2!=0) 
                res++;
             n=n/2;
        }
        cout<<res<<endl;
    }
    return 0;
}
