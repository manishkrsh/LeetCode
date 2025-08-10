class Solution {
public:
    string reverseWords(string s) {
        string ans;
        string word;
        int n = s.size();
        
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                word.push_back(s[i]);
            }
            if (s[i] == ' ' && !word.empty()) {
                reverse(word.begin(), word.end());
                if (!ans.empty()) ans.push_back(' '); // add space only between words
                ans += word;
                word.clear();
            }
        }

        // Add the last word (first in original string)
        if (!word.empty()) {
            reverse(word.begin(), word.end());
            if (!ans.empty()) ans.push_back(' ');
            ans += word;
        }

        return ans;
    }
};