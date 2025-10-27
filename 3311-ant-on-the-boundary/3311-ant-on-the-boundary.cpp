class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int ans = 0, pos = 0;
        for (int x : nums)
            if ((pos += x) == 0) ans++;
        return ans;
    }
};