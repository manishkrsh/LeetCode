class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int st = 0, end = nums.size() - 1;

        while (st < end) {
            int mid = st + (end - st) / 2;

            // Make sure mid is even (pointing to first of a pair)
            if (mid % 2 == 1) mid--;

            if (nums[mid] == nums[mid + 1]) {
                st = mid + 2;  // single is after this pair
            } else {
                end = mid;     // single is at mid or before
            }
        }
        return nums[st];
    }
};