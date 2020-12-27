/*
Given a sorted array with possibly duplicate elements, the task is to find indexes of first and last occurrences of an element x in the given array.

Note: If the number x is not found in the array just print '-1'.

Input:
The first line consists of an integer T i.e number of test cases. The first line of each test case contains two integers n and x. The second line contains n spaced integers.

Output:
Print index of the first and last occurrences of the number x with a space in between.

Constraints: 
1<=T<=100
1<=n,a[i]<=1000

Example:
Input:
2
9 5
1 3 5 5 5 5 67 123 125
9 7
1 3 5 5 5 5 7 123 125

Output:
2 5
6 6
*/

//Tushar Nikam codes
#include<bits/stdc++.h>
using namespace std;

int first(int a[],int n,int x) {
    for(int i=0;i<n;i++) {
        if(a[i]==x) {
            return i;
            break;
        }
    }
    return -1;
}

int last(int a[],int n,int x) {
    
    if(a[0]==x) return 0;
    if(a[n-1]==x) return n-1;
    
    for(int i=0;i<n;i++) {
        if(a[i]==x) {
            if(a[i]!=a[i+1]) 
            return i;
        }
    }
   // return -1;
}

int main()
{
    //T for Number of Test Cases
    int T;
    cin>>T;
    while(T--)
    {
        //start here
        int n,k;
        cin>>n>>k;
        int a[n];
        
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        
        int x = first(a,n,k);
        int y = last(a,n,k);
        
        if(x==-1 || y==-1) 
            cout<<"-1"<<endl;
        else 
        cout<<x<<" "<<y<<endl;
        
    }
    return 0;
}
