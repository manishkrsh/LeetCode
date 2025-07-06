class Solution {
public:
    set<vector<int>> s;
    void getAllCombinations(vector<int> &arr, int tar, int idx, vector<int> &combin, vector<vector<int>> &ans){

        if(tar==0){
            if(s.find(combin)==s.end()){
            ans.push_back(combin);
            s.insert(combin);
            }
            return;  
        }
        if(tar<0 || idx==arr.size()){
            return;
        }
        combin.push_back(arr[idx]);
        getAllCombinations(arr, tar-arr[idx], idx+1, combin, ans);
        getAllCombinations(arr, tar-arr[idx], idx, combin, ans);
        combin.pop_back();
        getAllCombinations(arr, tar, idx+1, combin, ans);
        


    }
    vector<vector<int>> combinationSum(vector<int>& arr, int tar) {
        vector<vector<int>> ans;
        vector<int> combin;

        getAllCombinations(arr, tar, 0, combin, ans);
        return ans;
    }
};