

#include<bits/stdc++.h>
using namespace std;


unsigned int getFirstSetBit(int n){
    
    return ffs(n);   
}


int main()
{
    int t;
    cin>>t; // testcases
    while(t--)
    {
        int n;
        cin>>n; //input n
        printf("%u\n", getFirstSetBit(n)); // function to get answer
    }
	return 0;
}

