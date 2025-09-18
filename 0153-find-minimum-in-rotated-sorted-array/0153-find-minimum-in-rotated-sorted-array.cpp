class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, h = nums.size() - 1;
        int ans = INT_MAX;

        while(l <= h){
            int mid = l + (h - l) / 2;
            ans = min(ans, nums[mid]);

            if(nums[mid] <= nums[h]) {
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return ans;
    }
};