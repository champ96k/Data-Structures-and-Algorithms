/*
762. Prime Number of Set Bits in Binary Representation

Given two integers L and R, find the count of numbers in the range [L, R] (inclusive) having a prime number of set bits in their binary representation.

(Recall that the number of set bits an integer has is the number of 1s present when written in binary. For example, 21 written in binary is 10101 which has 3 set bits. Also, 1 is not a prime.)

Example 1:

Input: L = 6, R = 10
Output: 4
Explanation:
6 -> 110 (2 set bits, 2 is prime)
7 -> 111 (3 set bits, 3 is prime)
9 -> 1001 (2 set bits , 2 is prime)
10->1010 (2 set bits , 2 is prime)

*/
class Solution {
    
    bool checkPrime(int n) {
        if (n <= 1) 
        return false; 
  
    // Check from 2 to n-1 
    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
 
     } 
    
public:
    int countPrimeSetBits(int L, int R) {
        
        int count=0,x=0;
        for(int i=L;i<=R;i++) {
            
             x = __builtin_popcount(i); 
            
            if(checkPrime(x)) {
                count++;
            } 
        }
        return count;
    }
};
