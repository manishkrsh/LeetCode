class Solution {
public:
    void getallSubsets(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& allsubsets) {
        if (i == nums.size()) {
            allsubsets.push_back(ans);  // Fix 1: use `ans`, not `{and}`
            return;
        }

        // Include current element
        ans.push_back(nums[i]);
        getallSubsets(nums, ans, i + 1, allsubsets);

        // Exclude current element
        ans.pop_back();
        getallSubsets(nums, ans, i + 1, allsubsets);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allsubsets;
        vector<int> ans;
        getallSubsets(nums, ans, 0, allsubsets);
        return allsubsets;  // Fix 2: You must return the result
    }
};