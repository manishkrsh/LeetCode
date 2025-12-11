class Solution {
public:
    set<vector<int>> s;
    void getCombinations(vector<int> &arr, int tar, int idx, vector<int> &combin, vector<vector<int>> &ans){
        if(idx >= arr.size() || tar<0)return;
        if(tar==0){
            if(s.find(combin)==s.end()){
            ans.push_back(combin);
            s.insert(combin);
            }
            return;  
        }
        combin.push_back(arr[idx]);
        getCombinations(arr, tar-arr[idx], idx, combin, ans);
        getCombinations(arr, tar-arr[idx], idx+1, combin, ans);
        combin.pop_back();
        getCombinations(arr, tar, idx+1, combin, ans);

    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<int> combin;
        vector<vector<int>> ans;
        getCombinations(arr, target, 0, combin, ans);
        return ans;
    }
};