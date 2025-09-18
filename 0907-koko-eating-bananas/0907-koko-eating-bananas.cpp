class Solution {
public:
    int minEatingSpeed(vector<int>& nums, int h) {
        sort(nums.begin(),nums.end());
        int ans;
        int low = 1, high = *max_element(nums.begin(), nums.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            long long sum=0;
            for(int i=0; i<nums.size(); i++){
                if(nums[i]%mid==0){
                    sum+=nums[i]/mid;
                }else{
                    sum+=nums[i]/mid;
                    sum+=1;
                }
            }
            if(sum <= h){
                ans = mid;        // store possible answer
                high = mid - 1;   // try smaller speed
            }else{
                low = mid + 1;    // need more speed
            }
        }
        return ans;
    }
};