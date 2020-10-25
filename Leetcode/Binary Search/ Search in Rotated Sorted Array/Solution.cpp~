class Solution {
public:
    int search(vector<int>& a, int num) {
        
        int n=a.size();
        int low = 0, high = n-1;
        
        while(low <= high){
            long long mid = (low+high)/2;
            if(a[mid]==num)
               return  mid;
            

            if(a[low] <= a[mid]){
                
                if(a[low] <= num && num <= a[mid])
                    high = mid-1;
                
                else
                    low = mid+1;
            }
            
            else{
                if(a[mid] < a[high]){
                    if(a[mid] <= num && num <= a[high]){
                        low = mid+1;
                    }
                    else{
                        high = mid-1;
                    }
                }
            }
        }
        return -1;
    }
};
