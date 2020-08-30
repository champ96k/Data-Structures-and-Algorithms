/*
Alone in couple 

In a party everyone is in couple except one. People who are in couple have same numbers. Find out the person who is not in couple.

Input:
The first line contains an integer 'T' denoting the total number of test cases. In each test cases, the first line contains an integer 'N' denoting the size of array. The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array. (N is always odd)


Output:
In each seperate line print number of the person not in couple.



*/

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
        int x=0;
        
        for(int i=0;i<n;i++) {
            cin>>a[i];
            x=x^a[i];
            // cout<<"X: "<<x<<endl;
            // cout<<"a["<<i<<"] : "<<a[i]<<endl;
            // cout<<endl;
        }
        cout<<x<<endl;
    }
    return 0;
}
