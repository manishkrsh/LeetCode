class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        int minE = arr[0];  // Initialize with the first price

        for (int i = 1; i < n; i++) {
            // Update minE to be the lowest price seen so far
            minE = min(minE, arr[i]);

            // Calculate potential profit if sold today and update max profit
            ans = max(ans, arr[i] - minE);
        }

        return ans;
    }
};