/*
Sample Input

Welcome to 30 Days of Code!
Sample Output

Hello, World. 
Welcome to 30 Days of Code!
Explanation

On the first line, we print the string literal Hello, World.. On the second line, we print the contents of the inputString variable which, for this sample case, happens to be Welcome to 30 Days of Code!. If you do not print the variable's contents to stdout, you will not pass the hidden test case.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {

    string input_string; 
    
    getline(cin, input_string); 
    cout << "Hello, World." << endl;
     cout << input_string << endl;

    return 0;
}
