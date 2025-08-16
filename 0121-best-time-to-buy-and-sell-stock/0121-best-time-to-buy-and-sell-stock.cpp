class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n=arr.size();
        int maxProfit=0;
        int buy=INT_MAX;
        for(int i=0; i<n; i++){
            buy=min(arr[i],buy);
            maxProfit=max(maxProfit,(arr[i]-buy ));
        }
        return maxProfit;
    }
};