class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        
        int res=0;
        int temp=0;
        for(int i=0;i<a.size();i++) {
            for(int j=i+1;j<a.size();j++) {
                if(a[i]>a[j] && a[i]>temp) {
                    res = i;
                    temp=a[i];
                }
            }
        }
        return res;
    }
};
