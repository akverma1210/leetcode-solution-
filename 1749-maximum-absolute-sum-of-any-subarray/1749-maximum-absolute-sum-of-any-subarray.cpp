class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();
        int maxsum = nums[0];
        int minsum = nums[0];
        
        int currmaxsum = nums[0];
         int currminsum = nums[0];

         for (int i = 1; i<n; i++) {
            currmaxsum = max(nums[i], currmaxsum+nums[i]);
            maxsum = max(maxsum,currmaxsum);
             currminsum = min(nums[i], currminsum+nums[i]);
            minsum = min(minsum,currminsum);
         }
         return max(maxsum, abs(minsum));
    }
};