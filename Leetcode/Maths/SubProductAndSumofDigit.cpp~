/*
1281. Subtract the Product and Sum of Digits of an Integer

Given an integer number n, return the difference between the product of its digits and the sum of its digits.
 

Example 1:

Input: n = 234
Output: 15 
Explanation: 
Product of digits = 2 * 3 * 4 = 24 
Sum of digits = 2 + 3 + 4 = 9 
Result = 24 - 9 = 15

*/


class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,product=1,res;
        
        while(n>0) {
            int x = n%10;
            product = product*x;
            sum=sum+x;
            n = n/10;
        }
        res=product-sum;
        return res;
    }
};
