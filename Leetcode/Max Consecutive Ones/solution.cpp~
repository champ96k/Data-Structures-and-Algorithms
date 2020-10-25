class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
       int temp=0,maxRes=0;
        
       for(int x:nums){
           
            if(x) {
                temp++;
                maxRes=max(maxRes,temp);
            } else {
                temp=0;
            }
        }
        return maxRes;
    }
};
