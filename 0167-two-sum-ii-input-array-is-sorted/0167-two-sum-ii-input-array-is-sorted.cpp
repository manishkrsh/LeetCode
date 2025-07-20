class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int x=n-1;
        int i=0;
        vector<int> ans;
        while(i<n){
            if(nums[i]+nums[x]==target){
                ans.push_back(i+1);
                ans.push_back(x+1);
                return ans;
            }
            if(nums[i]+nums[x]>target){
                x--;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};