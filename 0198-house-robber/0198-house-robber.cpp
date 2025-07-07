class Solution {
public:
    int getMax(int i, vector<int> &nums, vector<int> &dp){
        if (i >= nums.size()) return 0;

        if (dp[i] != -1) return dp[i];

        int rob = nums[i] + getMax(i + 2, nums, dp);
        int skip = getMax(i + 1, nums, dp);

        return dp[i] = max(rob, skip);
    }

    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return getMax(0, nums, dp);
    }
};