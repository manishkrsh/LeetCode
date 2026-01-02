class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {
        int n=nums.size();
        for(int i=n-1; i>=0; i--){
            if(nums[i]==9)nums[i]=0;
            else{
                nums[i]+=1;
                break;
            }
        }
        if(nums[0]==0){
            nums.insert(nums.begin(), 1);
        }
        return nums;
    }
};