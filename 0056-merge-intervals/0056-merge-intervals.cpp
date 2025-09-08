class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        if(intervals.empty()) return ans;

        // Step 1: Sort intervals by start
        sort(intervals.begin(), intervals.end());

        // Step 2: Start with the first interval
        ans.push_back(intervals[0]);

        // Step 3: Iterate and merge
        for(int i = 1; i < intervals.size(); i++) {
            // if current interval overlaps with the last in ans
            if(intervals[i][0] <= ans.back()[1]) {
                ans.back()[1] = max(ans.back()[1], intervals[i][1]); // merge
            } else {
                ans.push_back(intervals[i]); // no overlap → new interval
            }
        }

        return ans;
    }
};