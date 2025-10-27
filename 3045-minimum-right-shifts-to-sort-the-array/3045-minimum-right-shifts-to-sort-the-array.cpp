class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int n = nums.size();
        int i = 0;

        // Find the first point where the increasing order breaks
        while (i + 1 < n && nums[i] < nums[i + 1]) i++;

        // If array is already sorted
        if (i == n - 1) return 0;

        // The array must be sorted after rotation starting from i+1
        int j = i + 1;
        while (j + 1 < n && nums[j] < nums[j + 1]) j++;

        // If rotation doesn’t make it sorted, return -1
        if (j != n - 1 || nums.back() > nums[0]) return -1;

        return n - i - 1; // minimum right shifts
    }
};