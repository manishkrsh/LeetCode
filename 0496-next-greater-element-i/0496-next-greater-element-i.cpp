class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m; // stores next greater element of nums2[i]
        stack<int> st;

        // Traverse nums2 from right to left
        for (int i = nums2.size() - 1; i >= 0; i--) {
            // Pop elements smaller or equal to nums2[i]
            while (!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }
            
            // If stack not empty, top is next greater element
            if (!st.empty()) {
                m[nums2[i]] = st.top();
            } else {
                m[nums2[i]] = -1;
            }
            
            // Push current element
            st.push(nums2[i]);
        }

        // Build result for nums1 using map
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++) {
            ans.push_back(m[nums1[i]]);
        }

        return ans;
    }
};