class Solution {
public:
set<vector<int>> s;
    void getCombinations(int k, int tar, int num, vector<int> &combin, vector<vector<int>> &ans){
        if (tar == 0) {
            if (k == 0 && s.find(combin) == s.end()) {
                ans.push_back(combin);
                s.insert(combin);
            }
            return;
        }
        // Then prune invalid cases
        if (k < 0 || num == 10 || tar < 0) return;
        combin.push_back(num);
        getCombinations(k-1, tar-num, num+1, combin, ans);
        combin.pop_back();
        getCombinations(k, tar, num+1, combin, ans);

    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> combin;
        vector<vector<int>> ans;
        getCombinations(k, n, 1, combin, ans);
        return ans;
    
    }
};