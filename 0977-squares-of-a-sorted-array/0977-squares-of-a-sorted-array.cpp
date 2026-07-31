class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();

        vector<int> count(n);

        int i = 0;
        int j = n - 1;
        int idx = n - 1;

        while (i <= j) {
            if (abs(nums[i]) > abs(nums[j])) {
                count[idx] = nums[i] * nums[i];
                i++;
            } else {
                count[idx] = nums[j] * nums[j];
                j--;
            }
            idx--;
        }

        return count;
    }
};