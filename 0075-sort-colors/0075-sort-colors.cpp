class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0, j = nums.size() - 1;
        int k = 0;
        while (k <= j) { // also change this condition
            if (nums[k] == 0) {
                swap(nums[k], nums[i]);
                i++;
                k++;
            }
            else if (nums[k] == 2) {
                swap(nums[k], nums[j]);
                j--;
                // ❌ do not increment k here
            }
            else { // nums[k] == 1
                k++;
            }
        }
    }
};