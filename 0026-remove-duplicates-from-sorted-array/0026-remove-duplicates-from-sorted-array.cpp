class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        for(int i=n-1; i>=1; i--){
            if(nums[i]==nums[i-1]){
                nums[i]=-101;
            }
        }
        erase(nums,-101);
        sort(nums.begin(),nums.end());
        return nums.size();
    }
};