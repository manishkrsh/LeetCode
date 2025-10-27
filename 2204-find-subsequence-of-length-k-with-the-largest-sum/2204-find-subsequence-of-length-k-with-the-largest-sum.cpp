class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int,int>> v;
        
        // Store (value, index) for each element
        for (int i = 0; i < nums.size(); ++i) 
            v.push_back({nums[i], i});

        // Sort by value in descending order
        sort(v.begin(), v.end(), [](auto &a, auto &b){ 
            return a.first > b.first; 
        });

        // Keep only top k elements
        v.resize(k);

        // Sort those k elements by their original index
        sort(v.begin(), v.end(), [](auto &a, auto &b){ 
            return a.second < b.second; 
        });

        // Extract values in original order
        vector<int> res;
        for (auto &p : v) res.push_back(p.first);

        return res;
    }
};