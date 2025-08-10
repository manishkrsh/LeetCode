class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq; // stores indices, front has index of max element
        vector<int> ans;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            // 1️⃣ Remove indices that are out of this window
            while (!dq.empty() && dq.front() <= i - k) {
                dq.pop_front();
            }

            // 2️⃣ Remove from back all elements smaller than nums[i]
            while (!dq.empty() && nums[dq.back()] < nums[i]) {
                dq.pop_back();
            }

            // 3️⃣ Push current index
            dq.push_back(i);

            // 4️⃣ If we have a full window, record the max (front of deque)
            if (i >= k - 1) {
                ans.push_back(nums[dq.front()]);
            }
        }

        return ans;
    }
};