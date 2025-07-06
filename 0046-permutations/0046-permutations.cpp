class Solution {
public:
    void backtrack(vector<int>& nums, vector<bool>& used, vector<int>& path, vector<vector<int>>& ans) {
        if (path.size() == nums.size()) {
            ans.push_back(path);
            return;
        }

        for (int i = 0; i < nums.size(); ++i) {
            if (used[i]) continue;

            // Choose
            used[i] = true;
            path.push_back(nums[i]);

            // Explore
            backtrack(nums, used, path, ans);

            // Un-choose (backtrack)
            path.pop_back();
            used[i] = false;
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> path;
        vector<bool> used(nums.size(), false);

        backtrack(nums, used, path, ans);
        return ans;
    }
};