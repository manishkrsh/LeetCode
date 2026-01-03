class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        for (int n : nums) totalSum += n;
        int left=0;
        for(int i=0; i<nums.size(); i++){
            if(left==totalSum-nums[i]-left)return i;
            left+=nums[i]; 
        }
        return -1;
    }
};