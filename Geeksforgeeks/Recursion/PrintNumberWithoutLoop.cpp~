// { Driver Code Starts

/* Driver program to test printNo

Your Task:
This is a function problem. You only need to complete the function printNos() that takes N as parameter and prints number from 1 to N recursively. The driver code adds the newline automatically after the function call.


Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N) (Recursive).

*/

#include <bits/stdc++.h>
using namespace std;

void printNos(int N);

int main()
{
    int T;
    cin>>T;
    
    while(T--)
    {
        int N;
        cin>>N;
        printNos(N);
        
        cout<<endl;
    }
    return 0;
}

void printNos(int N)
{
   if (N < 1)
    return;
    
    printNos(N-1);
    cout<<(N)<<" ";
    
}
