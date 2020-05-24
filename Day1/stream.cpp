#include<bits/stdc++.h>
using namespace std;

/*
Input Format

The first and only line consists of n integers separated by commas.

Output Format

Print the integers after parsing it.

P.S.: I/O will be automatically handled. You need to complete the function only.

Sample Input

23,4,56
Sample Output

23
4
56
*/

int main() {
    string a;
    cin>>a;
        for (int i=0;i<a.size();i++)
        {
            if (a[i]!=',')
                cout<<a[i];
            else
                cout<<"\n";    
        }
    
    return 0;
}