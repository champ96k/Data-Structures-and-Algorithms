/*
You are given an interger I. You need to print the absolute value of the interger I.

Input:
The first line of input contains T, denoting number of testcases. Each testcase contains single integer I which may be positive or negative.

Output:
For each testcase, in a new line, output the absolute value.


Expected Time and Space Complexity : O(1)

*/

#include <bits/stdc++.h>
using namespace std;

int absolute(int I);

int main() {
    int T;    // number of testcases
    cin >> T; // input number of testcases
    while (T--) {
        int I;
        cin >> I;
        cout << absolute(I) << endl; // print the output
    }
    return 0;
}

int absolute(int I) {
    return abs(I);
}

