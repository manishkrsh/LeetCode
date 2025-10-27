class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
    if (nums.empty()) return 0;

    int maxNum = *max_element(nums.begin(), nums.end());
    vector<int> points(maxNum + 1, 0);

    // Step 1: Accumulate total points for each number
    for (int num : nums)
        points[num] += num;

    // Step 2: House Robber logic with O(1) space
    int prev2 = 0;          // dp[i-2]
    int prev1 = points[1];  // dp[i-1]

    for (int i = 2; i <= maxNum; i++) {
        int curr = max(prev1, prev2 + points[i]);
        prev2 = prev1;
        prev1 = curr;
    }

    return prev1;
}
};