/*	Problem statement

Your friend is new to programming. He is given a task in the school to find the total number of alphabets in camel case in a string S. Help your friend in doing so.

Input: 
The first line of input contains an integer T, denoting the number of testcases. For each testcase there will be single line containing string S as an input.

Output: 
For each testcase in a new line, print the count of camel case character in the string.

Constraints:
1 <= T <= 15
1 <= |S| <= 100

Example:
Input : 
3
ckjkUUYII
HKJT
njnnk

Output : 
5
4
0

Explanation:
Testcase 1: The camel case characters present in the given string are: 'U', 'U', 'Y', 'I', 'I'.
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
        string str;
        cin>>str;
        int count=0;
        for(int i=0;i<str.size();i++) {
            int a=(int)str[i];
            if(a>=65 && a<=90) {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
