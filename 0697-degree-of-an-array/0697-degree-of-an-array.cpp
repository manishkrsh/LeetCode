class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> freq, first;
        int degree = 0, minLen = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (!first.count(nums[i])) 
                first[nums[i]] = i;

            freq[nums[i]]++;

            if (freq[nums[i]] > degree) {
                degree = freq[nums[i]];
                minLen = i - first[nums[i]] + 1;
            } else if (freq[nums[i]] == degree) {
                minLen = min(minLen, i - first[nums[i]] + 1);
            }
        }

        return minLen;
    }
};