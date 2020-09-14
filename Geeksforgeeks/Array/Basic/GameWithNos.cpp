/*
You are given an array A[] , you have to construct a new array A2[].
The values in A2[] are obtained by doing Xor of consecutive elements in array.

Input:
First line of the input contains t, the number of test cases. Each line of the test case contains a number n specifying the number of elements.
 Each 'n' lines denoting elements of array A[].

Output:
Each new line of the output contains element of array A2[] .

 

Constraints:

1<=t<=100

1<=n<=100000

1<=A[i]<=100000

Example:

Sample Input 0
1
5
10 11 1 2 3

Sample Output 0
1 10 3 1 3
 
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
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        
        for(int i=1;i<n;i++) {
          cout<<(a[i]^a[i-1])<<" ";    
        }
        cout<<a[n-1];
        
        cout<<endl;
        
    }
    return 0;
}
