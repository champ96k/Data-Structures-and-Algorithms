/*
1356. Sort Integers by The Number of 1 Bits

Given an integer array arr. You have to sort the integers in the array in ascending order by the number of 1's in their binary representation and in case of two or more integers have the same number of 1's you have to sort them in ascending order.

Return the sorted array.

Example 1:

Input: arr = [0,1,2,3,4,5,6,7,8]
Output: [0,1,2,4,8,3,5,6,7]
Explantion: [0] is the only integer with 0 bits.
[1,2,4,8] all have 1 bit.
[3,5,6] have 2 bits.
[7] has 3 bits.
The sorted array by bits is [0,1,2,4,8,3,5,6,7]


*/

class Solution {
public:
    static bool comp(const int &a,const int &b){
        if(__builtin_popcount(a) == __builtin_popcount(b))
            return a<b;
        else return __builtin_popcount(a) < __builtin_popcount(b);
    } 
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),comp);
        return arr;
    }
};


//Another Solution

/*
class Solution {
    
public:
    static bool mycomp(int a,int b){
        
        int a1=__builtin_popcount(a);
        int b1=__builtin_popcount(b);
        if(a1==b1)return a<b;
        return a1<b1;
    }
    vector<int> sortByBits(vector<int>& arr) {
        
        
        sort(arr.begin(),arr.end(),mycomp);
        
        return arr;
    }
};
*/
