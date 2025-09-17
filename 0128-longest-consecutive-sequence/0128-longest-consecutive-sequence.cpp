class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;   // edge case
        int n = nums.size();
        int maxCount = 1, count = 1;
        sort(nums.begin(), nums.end());
        
        for(int i = 1; i < n; i++){
            if(nums[i] == nums[i-1] + 1){      // consecutive
                count++;
            }
            else if(nums[i] == nums[i-1]) {    // duplicate, skip
                continue;
            }
            else {                             // reset streak
                count = 1;
            }
            maxCount = max(maxCount, count);
        }
        return maxCount;
    }
};