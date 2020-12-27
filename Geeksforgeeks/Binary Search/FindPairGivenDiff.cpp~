/*
Given an unsorted array Arr[] and a number N. You need to write a program to find if there exists a pair of elements in the array whose difference is N.

Input:
First line of input contains an integer T which denotes the number of test cases. Then T test cases follows. First line of each test case contains two space separated integers L and N where L denotes the length of array or the number of elements in the array and N denotes the difference between two elements. Second line of each test case contains L space separated integers which denotes the elements of the array.

Output:
For each test case, in a new line print 1 if the pair is found otherwise print -1 if there does not exist any such pair.

Constraints:
1<=T<=100
1<=L<=104
1<=Arr[i]<=105

Example:
Input:
2
6 78
5 20 3 2 5 80
5 45
90 70 20 80 50
Output:
1
-1
*/

//Tushar Nikam codes
#include<bits/stdc++.h>
using namespace std;

bool solve(int a[],int n,int k) {
    
    for(int i=0;i<n;i++) {
        for(int j=i;j<n;j++) {
            int res = abs(a[i] - a[j]);
            if(res==k) {
                return true;
            }
        }
    }
    return false;
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
        
        if(solve(a,n,k)) {
            cout<<"1"<<endl;
        } else {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}
