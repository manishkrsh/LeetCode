class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& nums) {
        int idx = 0;
        double maxDiag = 0;

        for (int i = 0; i < nums.size(); i++) {
            double currDiag = sqrt(nums[i][0] * nums[i][0] + nums[i][1] * nums[i][1]);
            if (currDiag > maxDiag) {
                maxDiag = currDiag;
                idx = i;
            }
            // If diagonals are equal, choose rectangle with larger area
            else if (abs(currDiag - maxDiag) < 1e-9) {
                if (nums[i][0] * nums[i][1] > nums[idx][0] * nums[idx][1])
                    idx = i;
            }
        }
        return nums[idx][0] * nums[idx][1];
    }
};