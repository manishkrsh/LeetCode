class Solution {
public:
    char o = '(', c = ')';
    set<string> st;

    void backtrack(string &s, int n, int m) {
        if (n < 0 || m < 0) return;

        if (n == 0 && m == 0) {
            st.insert(s);
            return;
        }

        if (n > 0) {
            s.push_back(o);
            backtrack(s, n - 1, m);   // ❌ removed: m = n;
            s.pop_back();
        }

        if (m > 0 && m > n) {
            s.push_back(c);
            backtrack(s, n, m - 1);
            s.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        string s = "";
        backtrack(s, n, n);
        return vector<string>(st.begin(), st.end());
    }
};