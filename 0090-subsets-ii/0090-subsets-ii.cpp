class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> st;
        vector<int> sub;
        backtrack(nums, 0, sub, st);

        return vector<vector<int>>(st.begin(), st.end()); // Convert set to vector
    }

    void backtrack(vector<int>& nums, int idx, vector<int>& sub, set<vector<int>>& st) {
        st.insert(sub);
        for (int i = idx; i < nums.size(); i++) {
            sub.push_back(nums[i]);
            backtrack(nums, i + 1, sub, st);
            sub.pop_back();
        }
    }
};