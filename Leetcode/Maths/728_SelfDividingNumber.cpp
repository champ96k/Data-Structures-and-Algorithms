class Solution {
public:
    bool selfDividing(int num) {
        int original = num;
       while(num>0) {
        int remain = num%10;
        if(remain==0 || original%remain!=0) {
            return false;
        }       
        num=num/10;
    }
        return true;
    }
    
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;
        for(int i=left; i<=right;i++) {
            if(selfDividing(i)) {
                v.push_back(i);
            }
        }
        return v;
    }
};
