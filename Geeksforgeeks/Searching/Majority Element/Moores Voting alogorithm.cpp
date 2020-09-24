
//Tushar Nikam codes
#include<bits/stdc++.h>
using namespace std;

long long majorityElement(long long a[], long long n)
        {
            
            // your code here
            int count=0;
            int candidate=0;
            for(int i=0;i<n;i++) {
                if(count==0) {
                    candidate = a[i];
                }
                if(a[i]==candidate) {
                    count++;
                } else {
                    count--;
                }
            }
            return candidate;
        }
        
int main()
{
    //T for Number of Test Cases
    int T;
    cin>>T;
    while(T--)
    {
        //start here
        long long n;
        cin>>n;
        long long a[n];
        for(long long i=0;i<n;i++) {
            cin>>a[i];
        }
        
        cout<<majorityElement(a,n)<<endl;
    }
    return 0;
}
