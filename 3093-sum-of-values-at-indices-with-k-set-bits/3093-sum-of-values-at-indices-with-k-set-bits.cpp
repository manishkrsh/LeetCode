class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
            if (__builtin_popcount(i) == k) // counts set bits in 'i'
                sum += nums[i];
        return sum;
    }
};