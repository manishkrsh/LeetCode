class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 1);

        int prefix = 1;
        for (int i = 0; i < n; i++) {
            res[i] = prefix;   // assign product of all left elements
            prefix *= nums[i]; // update prefix
        }

        int suffix = 1;
        for (int i = n - 1; i >= 0; i--) {
            res[i] *= suffix;  // multiply with product of right elements
            suffix *= nums[i]; // update suffix
        }

        return res;
    }
};