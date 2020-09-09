/*
Given an array of size N with all initial values as 0, write a program to perform following M range increment operations as shown below:
 

increment(a, b, k) : Increment values from 'a'
                     to 'b' by 'k'.  

After M operations, calculate the maximum value 
in the array.
Input:
First line of input contains a single integer T which denotes the number of test cases. T test cases follows. First line of each test case contains two space separated integers N and M. Next M lines of each test case contains three space separated integers a , b and k.

Output:
For each test case print the maximum element in the array after M increment operations.



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
        int n,m;
        cin>>n>>m;
        int arr[n+1] = {0};
        
        
        
        while(m--) {
            int a,b,k;
            cin>>a>>b>>k;
            arr[a] = arr[a] +k;
            arr[b+1] = arr[b+1] -k;
        }
        int pre_sum=arr[0],res_sum = arr[0];
        for(int i=1;i<n+1;i++) {
            pre_sum+= arr[i];
            res_sum = max(res_sum,pre_sum);
        }
        cout<<res_sum<<endl;
    }
    return 0;
}
