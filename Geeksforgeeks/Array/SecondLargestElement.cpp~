/*
Given an array of elements. Your task is to find the second maximum element in the array.

Input:
The first line of input contains an integer T which denotes the number of test cases. Then T test cases follows. First line of each test case contains a single integer N which denotes the number of elements in the array. Second line of each test case contains N space separated integers which denotes the elements of the array.
Output:
For each test case in a new line print the second maximum element in the array. If there does not exist any second largest element, then print -1.


Constraints:
1<=T<=100
2<=n<=1000
1<=a[i]<=106


Example:
Input:
2
5
2 4 5 6 7
6
7 8 2 1 4 3
Output:
6
7
*/

//Tushar Nikam codes
#include<bits/stdc++.h>
using namespace std;

void solve(int a[],int n) {
    sort(a, a + n); 
    
    int flag=-1;
   
    for (int i = n - 2; i >= 0; i--) { 
        if (a[i] != a[n - 1]) { 
            flag =a[i];
             break;
        } 
    }
    if(flag==-1) {
         cout<<"-1"<<endl; 
    } else {
         cout<<flag<<endl; 
    }
    
    
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
        int a[n];
        
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        
        solve(a,n);
    }
    return 0;
}
