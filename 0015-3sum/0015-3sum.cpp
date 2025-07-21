class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> uniqueTriplets;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; ++i) {
            int j = i + 1;
            int k = n - 1;

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0) {
                    uniqueTriplets.insert({nums[i], nums[j], nums[k]});
                    ++j;
                    --k;
                } else if (sum < 0) {
                    ++j;
                } else {
                    --k;
                }
            }
        }

        return vector<vector<int>>(uniqueTriplets.begin(), uniqueTriplets.end());
    }
};