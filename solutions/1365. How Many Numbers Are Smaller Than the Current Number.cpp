class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
       int hashmap[101]={0};
        for(int i=0;i<nums.size();i++)
        {
            hashmap[nums[i]]++;
        }
        int count=0;
        for(int j=0;j<101;j++)
        {
            int temp=hashmap[j];
            hashmap[j]=count;
            count=count+temp;
        }
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=hashmap[nums[i]];
        }
        return nums;
        
    }
};
