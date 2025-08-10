class Solution {
public:
    string reverseWords(string s) {
        // Step 1: Remove extra spaces
        int n = s.size();
        int idx = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] != ' ' || (idx > 0 && s[idx - 1] != ' ')) {
                s[idx++] = s[i];
            }
        }
        if (idx > 0 && s[idx - 1] == ' ') idx--; // remove trailing space
        s.resize(idx);

        // Step 2: Reverse the entire string
        reverse(s.begin(), s.end());

        // Step 3: Reverse each word
        int start = 0;
        for (int end = 0; end <= s.size(); end++) {
            if (end == s.size() || s[end] == ' ') {
                reverse(s.begin() + start, s.begin() + end);
                start = end + 1;
            }
        }

        return s;
    }
};