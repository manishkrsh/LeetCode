class Solution {
public:
    void combi(int n, int k, int start, vector<int>& subAns, vector<vector<int>>& ans) {
        if (k == 0) {
            ans.push_back(subAns);
            return;
        }

        for (int i = start; i <= n; i++) {
            subAns.push_back(i);             // choose i
            combi(n, k - 1, i + 1, subAns, ans); // pick next from i+1
            subAns.pop_back();              // undo choice (backtrack)
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> subAns;
        combi(n, k, 1, subAns, ans); // start from 1
        return ans;
    }
};