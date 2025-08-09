class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> s; // to store unique quadruplets

        for (int a = 0; a < n - 3; a++) {
            for (int b = a + 1; b < n - 2; b++) {
                int c = b + 1, d = n - 1;

                while (c < d) {
                    long long sum = (long long)nums[a] + nums[b] + nums[c] + nums[d];

                    if (sum == target) {
                        s.insert({nums[a], nums[b], nums[c], nums[d]});
                        c++;
                        d--;
                    }
                    else if (sum < target) {
                        c++;
                    }
                    else {
                        d--;
                    }
                }
            }
        }

        // convert set to vector for answer
        return vector<vector<int>>(s.begin(), s.end());
    }
};