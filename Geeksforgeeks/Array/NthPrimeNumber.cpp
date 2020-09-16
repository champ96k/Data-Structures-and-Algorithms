/*
Given a number 'N'. The task is to find the Nth number whose each digit is a prime number i.e 2, 3, 5, 7. In other words, you have to find the nth number of this sequence: 2, 3, 5, 7, 22, 23,.. and so on.

Input:
The first line contains a single integer T i.e. the number of test cases. The first and only line of each test case consists of an integer N. 

Output: 
In one line print the nth number of the given sequence made of prime digits.

Expected Auxiliary Space: O(N).

Constraints:
1 <= T <= 100
1 <= N <= 100

Examples:
Input:
2
10
21
Output:
33
222

Explanation:
Testcase 1: 10th number in the sequence of numbers whose each digit is prime is 33.
Testcase 2: 21st number in the sequence of numbers whose each digit is prime is 222.
*/

//Tushar Nikam codes
#include<bits/stdc++.h>
using namespace std;

void nthprimedigitsnumber(long long n) 
{ 
    // Finding the length of n-th number 
    long long len = 1; 
  
    // Count of numbers with len-1 digits 
    long long prev_count = 0; 
    while (true) { 
        // Count of numbers with i digits 
        long long curr_count = prev_count + pow(4, len); 
  
        // if i is the length of such number 
        // then n<4*(4^(i-1)-1)/3 and n>= 4*(4 ^ i-1)/3 
        // if a valid i is found break the loop 
        if (prev_count < n && curr_count >= n) 
            break; 
  
        // check for i + 1 
        len++; 
  
        prev_count = curr_count; 
    } 
  
    // Till now we have covered 'prev_count' numbers 
  
    // Finding ith digit at ith place 
    for (int i = 1; i <= len; i++) { 
        // j = 1 means 2 j = 2 means ...j = 4 means 7 
        for (long long j = 1; j <= 4; j++) { 
            // if prev_count + 4 ^ (len-i) is less 
            // than n, increase prev_count by 4^(x-i) 
            if (prev_count + pow(4, len - i) < n) 
                prev_count += pow(4, len - i); 
  
            // else print the ith digit and break 
            else { 
                if (j == 1) 
                    cout << "2"; 
                else if (j == 2) 
                    cout << "3"; 
                else if (j == 3) 
                    cout << "5"; 
                else if (j == 4) 
                    cout << "7"; 
                break; 
            } 
        } 
    } 
    cout << endl; 
} 

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
        
        nthprimedigitsnumber(n);
    }
    return 0;
}
