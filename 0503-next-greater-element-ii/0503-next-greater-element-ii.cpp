class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1);
        stack<int> st;  // store indices

        // Traverse the array twice
        for (int i = 2 * n - 1; i >= 0; i--) {
            int idx = i % n;  // circular index
            while (!st.empty() && nums[st.top()] <= nums[idx]) {
                st.pop();
            }
            if (!st.empty()) {
                ans[idx] = nums[st.top()];
            }
            st.push(idx);
        }
        return ans;
    }
};