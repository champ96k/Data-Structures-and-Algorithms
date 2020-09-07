//Tushar Nikam codes
#include<bits/stdc++.h>
using namespace std;

void countBit(int n) {
    
    int count0 = 0, count1 = 0; 
    while (n) 
    { 
        //calculating count of zeros and ones 
        (n % 2 == 0) ? count0++ :count1++; 
        n /= 2; 
    } 
    
    cout<<"Count of 0s ="<<count0<<endl;
    cout<<"Count of 1s ="<<count1<<endl;
    int res = count0^count1;
    cout<<count0<<" XOR "<<count1<<" = "<<res<<endl;
    
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
        
        countBit(n);
    }
    return 0;
}
