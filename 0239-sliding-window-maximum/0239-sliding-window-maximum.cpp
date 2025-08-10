class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> pq; // max heap: {value, index}
        vector<int> ans;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            pq.push({nums[i], i});
            
            // Remove elements that are out of the current window
            while (pq.top().second <= i - k) {
                pq.pop();
            }
            
            // Start recording results when we have a full window
            if (i >= k - 1) {
                ans.push_back(pq.top().first);
            }
        }
        return ans;
    }
};