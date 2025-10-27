class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int ans=0;
        int bound=0;
        for(int i=0; i<nums.size(); i++){
            bound+=nums[i];
            if(bound==0)ans++;
        }
        return ans;
    }
};