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
        int a[n];
        
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        
        int minNum =a[0];
        int maxNum =a[0];
        for(int i=0;i<n;i++) {
            
            minNum = min(a[i],minNum);
            maxNum = max(a[i],maxNum);
        }
        cout<<maxNum<<" "<<minNum<<endl;
    }
    return 0;
}
