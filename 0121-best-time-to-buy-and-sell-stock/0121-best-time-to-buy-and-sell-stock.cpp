class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int buy=nums[0];
        int ans=0;
        for(int i=1; i<nums.size(); i++){
            buy=min(buy, nums[i]);
            ans=max(ans, nums[i]-buy);
        }
        return ans;
    }
};