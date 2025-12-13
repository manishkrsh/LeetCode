class Solution {
public:
    vector<string> ans;

    void backtrack(string &s, int open, int close, int n) {
        // If the current string is complete
        if (s.size() == 2 * n) {
            ans.push_back(s);
            return;
        }

        // We can always add '(' if we still have remaining open parentheses
        if (open < n) {
            s.push_back('(');
            backtrack(s, open + 1, close, n);
            s.pop_back();
        }

        // We can add ')' only if we have more '(' used than ')'
        if (close < open) {
            s.push_back(')');
            backtrack(s, open, close + 1, n);
            s.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        string s = "";
        backtrack(s, 0, 0, n);
        return ans;
    }
};