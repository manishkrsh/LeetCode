class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int totalSum = 0;
        for (int n : nums) totalSum += n;

        int leftSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (leftSum == totalSum - leftSum - nums[i])
                return i;
            leftSum += nums[i];
        }
        return -1;
    }
};