/*
Given an array of integers nums.

A pair (i,j) is called good if nums[i] == nums[j] and i < j.

Return the number of good pairs.

 

Example 1:

Input: nums = [1,2,3,1,1,3]
Output: 4
Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.
Example 2:

Input: nums = [1,1,1,1]
Output: 6
Explanation: Each pair in the array are good.

*/

//Time - 0(n)
//Space - 0(1)


class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        int mem[101] ={0};
        int sum=0;
        
        for(int i=0; i < nums.size(); i++){
            sum += mem[nums[i]];
            ++mem[nums[i]];
        }
        
        return sum;
    }
};


/*

Time - 0(n^2)
Space - 0(1)

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0,i,j;
        
        for(i=0;i<nums.size()-1;i++) 
            for(j=i+1;i<nums.size();j++) 
               while(i<j) {
                    if(nums[i]==nums[j]) 
                        count++;
               }
        return count;
    }
};

*/
