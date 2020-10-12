/*	Problem statement

Given a list of characters, merge all of them into a string.

Input:
First line of the input contains an integer T, denoting the number of testcases. Then T test case follows. Each testcase contains two lines:-
The number of characters in the array N.
The array of characters separated by space

Output:
For each testcase, print the character array converted into a string.

Constraints:
1<=T<=100
10<=N<=100


Example:

Input:
2
13
g e e k s f o r g e e k s
11
p r o g r a m m i n g

Output:
geeksforgeeks
programming
*/

//Tushar Nikam codes
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        char s[n];
        vector<char>v;
        for(int i=0;i<n;i++) {
            cin>>s[i];
            v.push_back(s[i]);
        }
        
        for(int i=0;i<n;i++) {
            cout<<v[i];
        }
        cout<<endl;
        
    }
    return 0;
}
