class Solution {
    public int numIdenticalPairs(int[] nums) {
         int count=0;
        int[] frq = new int[101];
        
        for(int num : nums) {
            count+=frq[num]++;
        }
        return count;
    }
}
