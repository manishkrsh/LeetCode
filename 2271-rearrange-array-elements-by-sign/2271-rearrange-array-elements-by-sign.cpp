class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> pos, neg;

        // Separate positives and negatives
        for(int x : nums) {
            if(x > 0) pos.push_back(x);
            else neg.push_back(x);
        }

        // Merge them alternating
        vector<int> ans(n);
        int i = 0, p = 0, q = 0;
        while(p < pos.size() && q < neg.size()) {
            ans[i++] = pos[p++];
            ans[i++] = neg[q++];
        }
        return ans;
    }
};