/*
iven a temperature in celsius C. You need to convert the given temperature to Fahrenheit.

Input:
The first line of input contains T, denoting number of testcases. Each testcase contains single integer C denoting the temperature in celsius.

Output:
For each testcase, in a new line, output the temperature in fahrenheit.

Note : Complete the task in constant time and space complexity.

*/

#include<bits/stdc++.h>
using namespace std;

double cToF(int C)
{
     return (C * 9/5 + 32);
}

int main()
{
    int T;//number of testcases
    int C,F;
    cin >> T; //input number of testcases
    while(T--){
        cin >> C;//input temperature in celscius
        cout << floor(cToF(C)) << endl; //print the output
    }
    return 0;
} 
