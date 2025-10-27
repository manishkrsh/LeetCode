class Solution {
public:
    int countTestedDevices(vector<int>& nums) {
        int test=0;
        for(int i=0; i<nums.size(); i++){
            if((nums[i]-test)>0)test++;
        }
        return test;
    }
};