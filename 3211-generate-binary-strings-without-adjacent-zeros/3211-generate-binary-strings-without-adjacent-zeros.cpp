class Solution {
public:
    char o = '0', l = '1';
    vector<string> ans;

    void backtrack(int n, string &s) {
        if (n == 0) {
            ans.push_back(s);
            return;
        }

        // add '0' only if previous is not '0'
        if (s.empty() || s.back() != '0') {
            s.push_back(o);
            backtrack(n - 1, s);
            s.pop_back();
        }

        // '1' can always be added
        s.push_back(l);
        backtrack(n - 1, s);
        s.pop_back();
    }

    vector<string> validStrings(int n) {
        string s = "";
        backtrack(n, s);
        return ans;
    }
};